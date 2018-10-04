// Lesson 5 - Memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void PrintString(char* string) {
	while (*string != NULL) {
		cout << *string;
		string++;
	}
}

struct node {
	int value;
	struct node* left;
	struct node* right;
};

void insert_integer(struct node* tree, int value){

}

void print_tree(struct node* tree) {

}

void terminate_tree(struct node* tree) {

}

int main() {

	int a = 10;

	char myChar = 'a';
	char* myString = new char[6] { 'H','e','l','l','o', NULL };

	cout << "The value of char variable on the stack: " << myChar;
	cout << "\nThe value of string variable on the heap: ";
	PrintString(myString);
	delete[] myString;

	cin >> a;

	/*int a;

	int* b;

	a = 100;

	b = new int;

	cout << "The pointer b points to the memory address " << b << " located on the heap\n";
	cout << "The value in memory location b is " << *b << "\n";

	*b = a;

	cout << "The value of stack variable a is " << a << "\n";
	cout << "The 'heap' memory pointed to by b contains " << *b << "\n";

	delete b;
	b = NULL;

	cin >> *b;*/

	return 0;
}

