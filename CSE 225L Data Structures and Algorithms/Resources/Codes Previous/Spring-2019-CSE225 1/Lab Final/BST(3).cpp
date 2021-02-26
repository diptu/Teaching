#include <iostream>
using namespace std;


struct Node {
	int data;
	Node *left, *right;
};


Node* newNode(int key)
{
	Node* node = new Node;
	node->data = key;
	node->left = node->right = nullptr;

	return node;
}


void inorder(Node* root)
{
	if (root == nullptr)
		return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}


Node* insert(Node* root, int key)
{

	if (root == nullptr)
		return newNode(key);


	if (key < root->data)
		root->left = insert(root->left, key);


	else
		root->right = insert(root->right, key);

	return root;
}


int findSum(Node* root)
{
	if (root == nullptr)
		return 0;

	return root->data + findSum(root->left) + findSum(root->right);
}


void update(Node* root, int &sum)
{

	if (root == nullptr)
		return;


	update(root->left, sum);


	sum = sum - root->data;


	root->data += sum;


	update(root->right, sum);
}


