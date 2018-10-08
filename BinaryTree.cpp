#include "stdafx.h"
#include "BinaryTree.h"

using namespace std;


BinaryTree::BinaryTree()
{
}

void BinaryTree::insert_integer(struct node* tree, int value) {
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

void BinaryTree::print_tree(struct node* tree) {
	if (tree->left != NULL)
		print_tree(tree->left);

	if (tree->right != NULL)
		print_tree(tree->right);

	cout << tree->value << "\n";
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