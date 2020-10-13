#include <iostream>

const int arsize = 10;

int input(int score[]);
void display(const int score[], int size, double avg);
double avg(int score[], int size);

int main() {
	int score[arsize];
	int size_score = input(score);
	double avg_score = avg(score, size_score);
	display(score, size_score, avg_score);

	return 0;
}

int input(int score[]) {
	using namespace std;

	int idx = 0;
	cout << "Enter up to 10 golf scores, q for quit:" << endl;
	while (idx < arsize && cin >> score[idx++]);

	return idx;
}

void display(const int score[], int size, double avg) {
	for (int i = 0; i < size; ++i) {
		std::cout << score[i] << " ";
	}
	std::cout << std::endl << "Average score: " << avg << std::endl;
}

double avg(int score[], int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += score[i];
	}
	return (double)sum / size;
}
