#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"

using namespace std;


struct NodeType {
	int info;
	NodeType *left, *right;
};

void InOrder(NodeType* root)
{
	if (root == nullptr)
   {
      return;
   }


	InOrder(root->left);
	cout << root->info << " ";
	InOrder(root->right);
}

NodeType* Node(int key)
{
	NodeType* node = new NodeType;
	node->info = key;
	node->left = node->right = nullptr;

	return node;
}

NodeType* insertItem(NodeType* root, int key)
{
	if (root == nullptr)
   {
      return Node(key);
   }
   if (key < root->info)
   {
      root->left = insertItem(root->left, key);
   }
   else
   {
      root->right = insertItem(root->right, key);
   }


	return root;
}
int findSum(NodeType* root)
{
	if (root == nullptr)
   {
      return 0;
   }
   return root->info + findSum(root->left) + findSum(root->right);
}
void updateNode(NodeType* root, int &sum)
{
	if (root == nullptr)
   {
      return;
   }

	updateNode(root->left, sum);
	sum = sum - root->info;
	root->info += sum;
	updateNode(root->right, sum);
}
int main()
{
	NodeType* root = nullptr;
	int keys[] = { 5, 3, 2, 4, 6, 8, 10 };
	int n = sizeof(keys)/sizeof(keys[0]);
	for (int key : keys)
   {
      root = insertItem(root, key);
   }

	int sum = findSum(root);
	updateNode(root, sum);
	InOrder(root);
	return 0;
}
