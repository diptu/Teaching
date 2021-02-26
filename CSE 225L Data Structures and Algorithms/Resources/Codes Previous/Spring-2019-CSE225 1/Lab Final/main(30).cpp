#include<BST.h>
#include"BST.h"
#include"BST.cpp"
#include "quetype.h"


using namespace std;

int main()
{
	Node* root = nullptr;


	int keys[] = { 5, 3, 2, 4, 6, 8, 10 };
	int n = sizeof(keys)/sizeof(keys[0]);

	for (int key : keys)
		root = insert(root, key);

	int sum = findSum(root);

	update(root, sum);

	inorder(root);

	return 0;
}

