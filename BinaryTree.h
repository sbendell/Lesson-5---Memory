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
	BinaryTree(int* numbers, int size);
	~BinaryTree();
	node* get_primary_node();
	void insert_integer(struct node* tree, int value);
	void print_tree(struct node* tree);
	void terminate_tree(struct node* tree);
	bool Search(struct node* leaf, int value) const;
private:
	node* primaryNode;
};

