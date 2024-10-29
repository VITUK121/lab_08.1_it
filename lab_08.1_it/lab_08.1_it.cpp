#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int Count(char* s){
	if (strlen(s) < 5)
		return 0;

	int counter = 0;
	for (int i = 0; s[i+4] != 0; i++) {
		if (s[i] == 'w' && s[i + 1] == 'h' && s[i + 2] == 'i' && s[i + 3] == 'l' && s[i + 4] == 'e') {
			counter++;
			i += 4;
		}
	}
	return counter;
}

char* Change(char* s){
	size_t len = strlen(s);
	if (len < 5)
		return s;

	size_t new_len = len - (Count(s) * 5) + (Count(s) * 2) + 1;
	char* tmp = new char[new_len];
	char* t = tmp;
	size_t i = 0;

	while (i < len) {
		if (s[i] == 'w' && s[i + 1] == 'h' && s[i + 2] == 'i' && s[i + 3] == 'l' && s[i + 4] == 'e') {
			*t++ = '*';
			*t++ = '*';
			i += 5;
		}
		else {
			*t++ = s[i++]; 
		}
	}
	*t = '\0';

	strcpy(s, tmp);
	delete[] tmp;
	return s;
}

int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	cout << "Counter = " << Count(str) << endl;
	char* dest = new char[101 - (Count(str)*2)];
	dest = Change(str);
	cout << "Result = : " << dest << endl;
}