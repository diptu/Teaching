
#ifndef BINARYSEARCHTREE_H_INCLUDED
#define BINARYSEARCHTREE_H_INCLUDED
#include "quetype.h"
template <class T>
struct TreeNode
{
T info;
TreeNode* left;
TreeNode* right;
};
enum OrderType {PRE_ORDER, IN_ORDER,
POST_ORDER};
template <class T>
class TreeType
{
public:
TreeType();
~TreeType();
void MakeEmpty();
bool IsEmpty();
bool IsFull();
int LengthIs();
void RetrieveItem(T& item, bool& found);
void InsertI(T item);
void DeleteItem(T item);
void ResetTree(OrderType order);
void GetNextItem(T& item,
OrderType order, bool& finished);
void Print();
private:
TreeNode<T>* root;
QueType<T> preQue;
QueType<T> inQue;
QueType<T> postQue;
};
#endif // BINARYSEARCHTREE_H_INCLUDED
