#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>
#include <vector>

using std::string;
using std::vector;

const int NUM = 26;

void get_wordlist(const char *filename, vector<string> &wordlist);

int main() {
	using std::cout;
	using std::cin;
	vector<string> wordlist;
	get_wordlist("wordlist", wordlist);
	cout << wordlist.size() << " words in wordlist\n";
	std::srand(std::time(0));
	char play;
	cout << "Will you play a word game? <y/n> ";
	cin >> play;
	while (play == 'y') {
		string target = wordlist[std::rand() % NUM];
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "Guess my secret word. It has " << length;
		cout << " letters, and you guess\n";
		cout << "one letter at a time. You get " << guesses;
		cout << " wrong guesses.\n";
		cout << "Your word: " << attempt << "\n";
		while (guesses > 0 && attempt != target) {
			char letter;
			cout << "Guess a letter: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos) {
				cout << "You already guessed that. Try again.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos) {
				cout << "Oh, bad gurss!\n";
				--guesses;
				badchars += letter;
			}
			else {
				cout << "Good guess!\n";
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos) {
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "Your word: " << attempt << "\n";
			if (attempt != target) {
				if (badchars.length() > 0)
					cout << "Bad choices: " << badchars << "\n";
				cout << guesses << " bad gursses left\n";
			}
		}
		if (guesses > 0)
			cout << "That's right!\n";
		else
			cout << "Sorry, the word is " << target << ".\n";
		cout << "Will you play another? <y/n> ";
		cin >> play;
		play = tolower(play);
	}
	cout << "Bye\n";
}

void get_wordlist(const char *fn, vector<string> &wl) {
	std::ifstream fin;
	fin.open(fn);
	if (!fin.is_open()) {
		std::cout << "failed to open file " << fn << "\n";
		std::exit(EXIT_FAILURE);
	}
	string word;
	while (fin >> word)
		wl.push_back(word);
}
