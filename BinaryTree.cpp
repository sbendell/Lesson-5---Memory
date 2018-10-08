#include "stdafx.h"
#include "BinaryTree.h"

using namespace std;


BinaryTree::BinaryTree(int* numbers, int size)
{
	primaryNode = new node();
	for (int i = 0; i < size; i++)
	{
		insert_integer(primaryNode, numbers[i]);
	}
}

void BinaryTree::insert_integer(struct node* leaf, int value) {
	if (value < leaf->value) {
		if (leaf->left == NULL) {
			leaf->left = new node();
			leaf->left->value = value;
			leaf->left->left = NULL;
			leaf->left->right = NULL;
		}
		else {
			insert_integer(leaf->left, value);
		}
	}
	else {
		if (leaf->right == NULL) {
			leaf->right = new node();
			leaf->right->value = value;
			leaf->right->left = NULL;
			leaf->right->right = NULL;
		}
		else {
			insert_integer(leaf->right, value);
		}
	}
}

void BinaryTree::print_tree(struct node* leaf) {
	if (leaf->left != NULL)
		print_tree(leaf->left);

	if (leaf->right != NULL)
		print_tree(leaf->right);

	cout << leaf->value << "\n";
}

void BinaryTree::terminate_tree(struct node* leaf) {
	if (leaf != NULL) {
		terminate_tree(leaf->left);
		terminate_tree(leaf->right);
		delete leaf;
		cout << "Deleted node at " << leaf << "\n";
	}
}

BinaryTree::~BinaryTree()
{
	terminate_tree(primaryNode);
}