#pragma once
#include <iostream>

struct node {
	int value;
	struct node* left;
	struct node* right;
};

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();
	void insert_integer(struct node* tree, int value);
	void print_tree(struct node* tree);
private:
	void terminate_tree(struct node* tree);
};

