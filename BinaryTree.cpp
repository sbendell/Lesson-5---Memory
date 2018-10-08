#include "stdafx.h"
#include "BinaryTree.h"

using namespace std;


BinaryTree::BinaryTree()
{
}


void insert_integer(struct node* tree, int value) {
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
		cout << "Deleted node at " << tree << "\n";
	}
}

BinaryTree::~BinaryTree()
{
}