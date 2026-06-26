//#include <iostream>
//#include <conio.h>
//using namespace std;
//
//
//void print_names(char names[][30], int size) {
//	for (int i = 0; i < size; i++)
//	{
//		cout << names[i] << "\n";
//	}
//	cout << "\n";
//}
//void sort_names(char names[][30], int size) {
//	for (int j = 0; j < size - 1; j++) {
//		if (strcmp(names[j], names[j + 1]) == 1) {
//			char tmp[30];
//			strcpy_s(tmp, names[j]);
//			strcpy_s(names[j], names[j + 1]);
//			strcpy_s(names[j + 1], tmp);
//		}
//	}
//}
//
//void count_symbols(char* str, char symbol) {
//	int count = 0;
//	for (int i = 0; str[i] != '\0'; i++) {
//
//
//		if (str[i] == symbol) {
//			count++;
//		}
//	}
//	cout << "Count of symbol which enter user: " << count << "\n";
//}
//
//
//void count_bracket(char* str) {
//	int count1 = 0, count2 = 0;
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (str[i] == '(') {
//			count1++;
//		}
//
//		if (str[i] == ')') {
//			count2++;
//		}
//	}
//	if (count1 > count2 || count1 < count2) {
//		cout << "false" << "\n";
//	}
//	else {
//		cout << "true" << "\n";
//	}
//}
//
//void count_of_matches(char* str, char symbol) {
//	int count = 0;
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (str[i] == symbol) {
//			count++;
//			cout << i << " ";
//		}
//	}
//	cout << "\n" << "count of matches is: " << count << '\n';
//}
//
//
//void swap_symbols(char* str) {
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (str[i] == '.') {
//			str[i] = '!';
//		}
//		if (str[i] == ' ') {
//			str[i] = '\t';
//		}
//	}
//	cout << "Changed array: " << str << "\n";
//}
//
//
//void last_match(char* str, char symbol) {
//	int tmp = 0;
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (str[i] == symbol) {
//			tmp = i;
//		}
//	}
//	cout << "Last match: " << tmp << "\n";
//}
//
//
//void del_pos(char* str, char* str_temp, int pos) {
//	for (int i = 0, j = 0; str[j] != '\0'; i++, j++) {
//		if (i != pos) {
//			str_temp[i] = str[j];
//		}
//
//		if (i == pos) {
//			str_temp[i] = str[++j];
//		}
//		str_temp[i + 1] = '\0';
//	}
//
//	cout << "Changed array: " << str_temp << "\n";
//}
//
//
//void del_pos_from_m_to_n(char* str, int pos_m, int pos_n) {
//
//	int length = strlen(str);
//	int count = pos_n - pos_m + 1;
//
//	for (int i = pos_m; i + count <= length; i++) {
//		str[i] = str[i + count];
//	}
//	cout << "Changed array: " << str << "\n";
//}
//
//
//void copy_without_symbol(char* str, char* str_temp, char symbol) {
//
//	for (int i = 0, j = 0; str[i] != '\0'; i++, j++) {
//		if (str[i] != symbol) {
//			str_temp[j] = str[i];
//		}
//		else {
//			str_temp[j] = str[++i];
//		}
//	}
//	cout << "Changed array: " << str_temp << "\n";
//}
//
//
//void paste_symbol_to_pos(char* str, char* str_temp, char symbol, int pos) {
//
//	for (int i = 0, j = 0; str[i] != '\0'; i++, j++) {
//		str_temp[j] = str[i];
//		if (i == pos) {
//			str_temp[++j] = symbol;
//		}
//		str_temp[j + 1] = '\0';
//	}
//	cout << "Changed array: " << str_temp << "\n";
//}
//
//int isalpha(int ch) {
//	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
//		return 1;
//	}
//	return 0;
//}
//
//int isdigit(int ch) {
//	if (ch >= 48 && ch <= 57) {
//		return 1;
//	}
//	return 0;
//}
//
//void count_symbols(char* str) {
//	int count_letters = 0, count_numbers = 0, count_another_symbols = 0;
//	for (int i = 0, j = 0; str[i] != '\0'; i++, j++) {
//		if (isalpha(str[i]) == 1) {
//			count_letters++;
//		}
//		else if (isdigit(str[i])) {
//			count_numbers++;
//		}
//		else {
//			count_another_symbols++;
//		}
//	}
//	cout << "Letters: " << count_letters << "\n" << "Numbers: " << count_numbers << "\n" << "Another symbols: " << count_another_symbols << "\n";
//}
//
//
//bool find_fragment(char* str, char* fragment) {
//	for (int i = 0; str[i] != '\0'; i++) {
//		bool res = true;
//		for (int j = 0; fragment[j] != '\0'; j++) {
//			if (str[i + j] == '\0' || str[i + j] != fragment[j]) {
//				res = false;
//				break;
//			}
//		}
//
//		if (res == true) {
//			return true;
//		}
//	}
//	return false;
//}
//
//
//void count_matches_fragment(char* str, char* fragment) {
//	int count = 0;
//	for (int i = 0; str[i] != '\0'; i++) {
//		bool res = true;
//		for (int j = 0; fragment[j] != '\0'; j++) {
//			if (str[i + j] == '\0' || str[i + j] != fragment[j]) {
//				res = false;
//				break;
//			}
//		}
//
//		if (res == true) {
//			count++;
//		}
//	}
//	cout << "Count of fragment in str: " << count << "\n";
//}
//
//
//bool is_fragment_at(char* str, char* fragment, int pos) {
//	for (int j = 0; fragment[j] != '\0'; j++) {
//		if (str[pos + j] == '\0' || str[pos + j] != fragment[j]) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void reverse_all_fragments(char* str, char* fragment) {
//	int length = 0;
//	for (int i = 0; fragment[i] != '\0'; i++) {
//		length++;
//	}
//
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (is_fragment_at(str, fragment, i)) {
//			for (int j = i; j < i + length / 2; j++) {
//				int end = i + length - 1 - (j - i);
//				char tmp = str[j];
//				str[j] = str[end];
//				str[end] = tmp;
//			}
//			i += length - 1;
//		}
//	}
//	cout << "Changed str: " << str << "\n";
//}
//
//
//void del_all_numbers(char* str, char* str_temp) {
//	for (int i = 0, j = 0; str[i] != '\0'; i++, j++) {
//		if (isdigit(str[i])) {
//			str_temp[j] = str[++i];
//		}
//		else {
//			str_temp[j] = str[i];
//		}
//		str_temp[i + 1] = '\0';
//	}
//	cout << "Changed array: " << str_temp << "\n";
//}
//
//
//void combine_all_numbers_in_str(char* str) {
//	int sum = 0;
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (isdigit(str[i])) {
//			sum *= 10;
//
//			if (str[i] == 49) {
//				sum += 1;
//			}
//
//			if (str[i] == 50) {
//				sum += 2;
//			}
//			
//			if (str[i] == 51) {
//				sum += 3;
//			}
//
//			if (str[i] == 52) {
//				sum += 4;
//			}
//
//			if (str[i] == 53) {
//				sum += 5;
//			}
//
//			if (str[i] == 54) {
//				sum += 6;
//			}
//
//			if (str[i] == 55) {
//				sum += 7;
//			}
//
//			if (str[i] == 56) {
//				sum += 8;
//			}
//
//			if (str[i] == 57) {
//				sum += 9;
//			}
//			
//		}
//	}
//	cout << "Changed array: " << sum << "\n";
//}
//
//
//int isspace(int ch) {
//	if (ch == 32) {
//		return 1;
//	}
//	return 0;
//}
//
//void del_all_except_of_letters_and_spaces(char* str, char* str_temp) {
//	for (int i = 0, j = 0; str[i] != '\0'; i++) {
//		if (isalpha(str[i]) || isspace(str[i])) {
//			str_temp[j] = str[i];
//			j++;
//			str_temp[j] = '\0';
//		}
//	}
//	cout << "Changed array: " << str_temp << "\n";
//}
//
//
//void hidden_word(char str[], char str_dict[][100]) {
//
//	int index = rand() % 10;
//	for (int i = 0; str_dict[index][i] != '\0'; i++) {
//		str[i] = str_dict[index][i];
//		str[i + 1] = '\0';
//	}
//}
//
//void encrypt_word(char str_hidden[], char str[]) {
//	for (int i = 0; str[i] != '\0'; i++) {
//		str_hidden[i] = '*';
//		str_hidden[i + 1] = '\0';
//	}
//}
//
//void check_word(char str[], char str_hidden[], char str_guess[]) {
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (str_guess[i] == str[i]) {
//			str_hidden[i] = str[i];
//		}
//	}
//}
//
//bool is_word_guessed(char* str_hidden) {
//	for (int i = 0; str_hidden[i] != '\0'; i++) {
//		if (str_hidden[i] == '*') {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	//task 1
//
//	/*const int size = 100;
//	char str[size];
//	cout << "Enter string: ";
//	gets_s(str);
//	char symbol;
//	cout << "Enter symbol: ";
//	cin >> symbol;
//	count_symbols(str, symbol);*/
//
//
//	//task 2
//
//	/*const int size = 100;
//	char str[size];
//	cout << "Enter string: ";
//	gets_s(str);
//	count_bracket(str);*/
//
//
//	//task 3
//
//	/*const int size = 100;
//	char str[size];
//	cout << "Enter string: ";
//	gets_s(str);
//	char symbol;
//	cout << "Enter symbol: ";
//	cin >> symbol;
//	count_of_matches(str, symbol);*/
//
//
//	//task 4
//
//	/*const int size = 100;
//	char str[size];
//	char str_temp[size];
//	cout << "Enter string: ";
//	gets_s(str);
//	swap_symbols(str);*/
//
//
//	//task 5
//
//	/*const int size = 100;
//	char str[size];
//	cout << "Enter string: ";
//	gets_s(str);
//	char symbol;
//	cout << "Enter symbol: ";
//	cin >> symbol;
//	last_match(str, symbol);*/
//
//
//	//task 6
//
//	//const int size = 100;
//	//char str_temp[size];
//	//char str[size];
//	//cout << "Enter string: ";
//	//gets_s(str);
//	//int pos;
//	//cout << "Enter pos: ";
//	//cin >> pos;
//	//del_pos(str, str_temp, pos);
//
//
//	//taks 7
//
//	//const int size = 100;
//	//char str_temp[size];
//	//char str[size];
//	//cout << "Enter string: ";
//	//gets_s(str);
//	//int pos_m, pos_n;
//	//cout << "Enter pos m: ";
//	//cin >> pos_m;
//	//cout << "Enter pos n: ";
//	//cin >> pos_n;
//	//del_pos_from_m_to_n(str, pos_m, pos_n);
//
//
//	//task 8
//
//	//const int size = 100;
//	//char str_temp[size];
//	//char str[size];
//	//cout << "Enter string: ";
//	//gets_s(str);
//	//char symbol;
//	//cout << "Enter symbol: ";
//	//cin >> symbol;
//	//copy_without_symbol(str, str_temp, symbol);
//
//
//	//task 9
//
//	//const int size = 100;
//	//char str_temp[size];
//	//char str[size];
//	//cout << "Enter string: ";
//	//gets_s(str);
//	//char symbol;
//	//cout << "Enter symbol: ";
//	//cin >> symbol;
//	//int pos;
//	//cout << "Enter pos: ";
//	//cin >> pos;
//	//paste_symbol_to_pos(str, str_temp, symbol, pos);
//
//	
//	//task 10
//	
//	//const int size = 100;
//	//char str[size];
//	//cout << "Enter string: ";
//	//gets_s(str);
//	//count_symbols(str);
//	
//
//	//task 11
//	
//	//const int size = 100;
//	//char str[size];
//	//cout << "Enter string: ";
//	//gets_s(str);
//	//char fragment[size];
//	//cout << "Enter fragment: ";
//	//cin >> fragment;
//	//cout << find_fragment(str, fragment);
//
//
//	//task 12
//
//	//const int size = 1000;
//	//char str[size];
//	//cout << "Enter string: ";
//	//gets_s(str);
//	//char fragment[size];
//	//cout << "Enter fragment: ";
//	//cin >> fragment;
//	//count_matches_fragment(str, fragment);
//
//
//	//task 13
//
//	//const int size = 100;
//	//char str[size];
//	//cout << "Enter string: ";
//	//gets_s(str);
//	//char fragment[size];
//	//cout << "Enter fragment: ";
//	//cin >> fragment;
//	//reverse_all_fragments(str, fragment);
//
//
//	//task 14
//
//	//const int size = 100;
//	//char str_temp[size];
//	//char str[size];
//	//cout << "Enter string: ";
//	//gets_s(str);
//	//del_all_numbers(str, str_temp);
//	
//
//	//task 15	
//
//	//const int size = 100;
//	//char str[size];
//	//cout << "Enter string: ";
//	//gets_s(str);
//	//combine_all_numbers_in_str(str);
//	
//
//	//task 16
//	
//	//const int size = 100;
//	//char str_temp[size];
//	//char str[size];
//	//cout << "Enter string: ";
//	//gets_s(str);
//	//del_all_except_of_letters_and_spaces(str, str_temp);
//
//
//	//task 17
//
//	//const int size = 100;
//	//char str_hidden[size];
//	//char str_guess[size];
//	//char str_dict[10][size] = {"Apple", "Book", "Cat", "Door", "Family", "House", "Milk", "Pen", "Sun", "Water"};
//	//char str[size];
//	//hidden_word(str, str_dict);
//	//encrypt_word(str_hidden, str);
//	//cout << "Thats game guess the word" << "\n";
//	//while (!is_word_guessed(str_hidden)) {
//	//	cout << str_hidden << "\n";
//	//	cout << "Enter string: ";
//	//	gets_s(str_guess);
//	//	check_word(str, str_hidden, str_guess);
//	//}
//	//cout << "Congrats you won" << "\n";
//}