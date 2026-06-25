#include <iostream>
#include <conio.h>
using namespace std;


void print_names(char names[][30], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << names[i] << "\n";
	}
	cout << "\n";
}
void sort_names(char names[][30], int size) {
	for (int j = 0; j < size - 1; j++) {
		if (strcmp(names[j], names[j + 1]) == 1) {
			char tmp[30];
			strcpy_s(tmp, names[j]);
			strcpy_s(names[j], names[j + 1]);
			strcpy_s(names[j + 1], tmp);
		}
	}
}

void count_symbols(char* str, char symbol) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {


		if (str[i] == symbol) {
			count++;
		}
	}
	cout << "Count of symbol which enter user: " << count << "\n";
}


void count_bracket(char* str) {
	int count1 = 0, count2 = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '(') {
			count1++;
		}

		if (str[i] == ')') {
			count2++;
		}
	}
	if (count1 > count2 || count1 < count2) {
		cout << "false" << "\n";
	}
	else {
		cout << "true" << "\n";
	}
}

void count_of_matches(char* str, char symbol) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == symbol) {
			count++;
			cout << i << " ";
		}
	}
	cout << "\n" << "count of matches is: " << count << '\n';
}


void swap_symbols(char* str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '.') {
			str[i] = '!';
		}
		if (str[i] == ' ') {
			str[i] = '\t';
		}
	}
	cout << "Changed array: " << str << "\n";
}


void last_match(char* str, char symbol) {
	int tmp = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == symbol) {
			tmp = i;
		}
	}
	cout << "Last match: " << tmp << "\n";
}


void del_pos(char* str, char* str_temp, int pos) {
	for (int i = 0, j = 0; str[j] != '\0'; i++, j++) {
		if (i != pos) {
			str_temp[i] = str[j];
		}

		if (i == pos) {
			str_temp[i] = str[++j];
		}
		str_temp[i + 1] = '\0';
	}

	cout << "Changed array: " << str_temp << "\n";
}


void del_pos_from_m_to_n(char* str, int pos_m, int pos_n) {

	int length = strlen(str);
	int count = pos_n - pos_m + 1;

	for (int i = pos_m; i + count <= length; i++) {
		str[i] = str[i + count];
	}
	cout << "Changed array: " << str << "\n";
}


void copy_without_symbol(char* str, char* str_temp, char symbol) {

	for (int i = 0, j = 0; str[i] != '\0'; i++, j++) {
		if (str[i] != symbol) {
			str_temp[j] = str[i];
		}
		else {
			str_temp[j] = str[++i];
		}
	}
	cout << "Changed array: " << str_temp << "\n";
}


void paste_symbol_to_pos(char* str, char* str_temp, char symbol, int pos) {

	for (int i = 0, j = 0; str[i] != '\0'; i++, j++) {
		str_temp[j] = str[i];
		if (i == pos) {
			str_temp[++j] = symbol;
		}
		str_temp[j + 1] = '\0';
	}
	cout << "Changed array: " << str_temp << "\n";
}




int main()
{
	//task 1

	/*const int size = 100;
	char str[size];
	cout << "Enter string: ";
	gets_s(str);
	char symbol;
	cout << "Enter symbol: ";
	cin >> symbol;
	count_symbols(str, symbol);*/


	//task 2

	/*const int size = 100;
	char str[size];
	cout << "Enter string: ";
	gets_s(str);
	count_bracket(str);*/


	//task 3

	/*const int size = 100;
	char str[size];
	cout << "Enter string: ";
	gets_s(str);
	char symbol;
	cout << "Enter symbol: ";
	cin >> symbol;
	count_of_matches(str, symbol);*/


	//task 4

	/*const int size = 100;
	char str[size];
	char str_temp[size];
	cout << "Enter string: ";
	gets_s(str);
	swap_symbols(str);*/


	//task 5

	/*const int size = 100;
	char str[size];
	cout << "Enter string: ";
	gets_s(str);
	char symbol;
	cout << "Enter symbol: ";
	cin >> symbol;
	last_match(str, symbol);*/


	//task 6

	//const int size = 100;
	//char str_temp[size];
	//char str[size];
	//cout << "Enter string: ";
	//gets_s(str);
	//int pos;
	//cout << "Enter pos: ";
	//cin >> pos;
	//del_pos(str, str_temp, pos);


	//taks 7

	//const int size = 100;
	//char str_temp[size];
	//char str[size];
	//cout << "Enter string: ";
	//gets_s(str);
	//int pos_m, pos_n;
	//cout << "Enter pos m: ";
	//cin >> pos_m;
	//cout << "Enter pos n: ";
	//cin >> pos_n;
	//del_pos_from_m_to_n(str, pos_m, pos_n);


	//task 8

	//const int size = 100;
	//char str_temp[size];
	//char str[size];
	//cout << "Enter string: ";
	//gets_s(str);
	//char symbol;
	//cout << "Enter symbol: ";
	//cin >> symbol;
	//copy_without_symbol(str, str_temp, symbol);


	//task 9

	//const int size = 100;
	//char str_temp[size];
	//char str[size];
	//cout << "Enter string: ";
	//gets_s(str);
	//char symbol;
	//cout << "Enter symbol: ";
	//cin >> symbol;
	//int pos;
	//cout << "Enter pos: ";
	//cin >> pos;
	//paste_symbol_to_pos(str, str_temp, symbol, pos);

	
	//task 10
	
	const int size = 100;
	char str_temp[size];
	char str[size];
	cout << "Enter string: ";
	gets_s(str);
	char symbol;
	cout << "Enter symbol: ";
	cin >> symbol;
	int pos;
	cout << "Enter pos: ";
	cin >> pos;
	
}