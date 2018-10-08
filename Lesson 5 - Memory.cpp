// Lesson 5 - Memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "BinaryTree.h"

using namespace std;

void PrintString(char* string) {
	while (*string != NULL) {
		cout << *string;
		string++;
	}
}

int main() {

	int a = 10;

	/*char myChar = 'a';
	char* myString = new char[6] { 'H','e','l','l','o', NULL };

	cout << "The value of char variable on the stack: " << myChar;
	cout << "\nThe value of string variable on the heap: ";
	PrintString(myString);
	delete[] myString;*/

	int* nums = new int[9]{ 5, 4, 8, 2, 3, 1, 6, 9, 8};

	BinaryTree tree(nums, 9);
	delete nums;

	for (int i = 1; i < 20; i++) {
		tree.insert_integer(tree.get_primary_node(), i);
	}

	tree.print_tree(tree.get_primary_node());

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

