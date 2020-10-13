#include <cctype>
#include <cstring>
#include "string1.h"

int String::num_strings = 0;
String::String(const char *s) {
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	++num_strings;
}
String::String() {
	len = 0;
	str = new char[1];
	str[0] = '\0';
	++num_strings;
}
String::String(const String &s) {
	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);
	++num_strings;
}
String::~String() {
	delete [] str;
	--num_strings;
}
String &String::operator=(const String &s) {
	if (this == &s)
		return *this;
	delete [] str;
	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);
	return *this;
}
String &String::operator=(const char *s) {
	delete [] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}
char &String::operator[](int i) {
	return str[i];
}
const char &String::operator[](int i) const {
	return str[i];
}
bool operator<(const String &s1, const String &s2) {
	return strcmp(s1.str, s2.str) < 0;
}
bool operator>(const String &s1, const String &s2) {
	return s2 < s1;
}
bool operator==(const String &s1, const String &s2) {
	return strcmp(s1.str, s2.str) == 0;
}
ostream &operator<<(ostream &os, const String &s) {
	os << s.str;
	return os;
}
istream &operator>>(istream &is, String &s) {
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is) {
		delete [] s.str;
		s.len = strlen(temp);
		s.str = new char[s.len + 1];
		strcpy(s.str, temp);
	}
	while (is && is.get() != '\n')
		continue;
	return is;
}
String operator+(const String &s1, const String &s2) {
	String res;
	res.len = s1.len + s2.len;
	res.str = new char[res.len + 1];
	strcat(res.str, s1.str);
	strcat(res.str, s2.str);
	return res;
}
void String::stringlow() {
	for (int i = 0; i < len; ++i) {
		if (isalpha(str[i])) {
			str[i] = tolower(str[i]);
		}
	}
}
void String::stringup() {
	for (int i = 0; i < len; ++i) {
		if (isalpha(str[i])) {
			str[i] = toupper(str[i]);
		}
	}
}
int String::has(char c) const {
	int times = 0;
	for (int i = 0; i < len; ++i) {
		if (str[i] == c) {
			++times;
		}
	}
	return times;
}
