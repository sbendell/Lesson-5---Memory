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
	if (value < tree->value) {
		if (tree->left == NULL) {
			tree->left = new node();
			tree->left->value = value;
			tree->left->left = NULL;
			tree->left->right = NULL;
		}
		else {
			insert_integer(tree->left, value);
		}
	}
	else {
		if (tree->right == NULL) {
			tree->right = new node();
			tree->right->value = value;
			tree->right->left = NULL;
			tree->right->right = NULL;
		}
		else {
			insert_integer(tree->right, value);
		}
	}
}

void print_tree(struct node* tree) {
	if (tree->left != NULL)
		print_tree(tree->left);

	if (tree->right != NULL)
		print_tree(tree->right);

	cout << tree->value << "\n";
}

void terminate_tree(struct node* tree) {
	if (tree != NULL) {
		terminate_tree(tree->left);
		terminate_tree(tree->right);
		delete tree;
		cout << "Deleted node at " << tree;
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

	node* primaryNode = new node;
	primaryNode->value = 10;
	primaryNode->left = NULL;
	primaryNode->right = NULL;


	for (int i = 1; i < 20; i++) {
		insert_integer(primaryNode, i);
	}

	print_tree(primaryNode);
	terminate_tree(primaryNode);

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

