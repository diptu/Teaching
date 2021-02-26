#ifndef TREETYPE_TREETYPE_H
#define TREETYPE_TREETYPE_H

#include "QueType.h"

enum orderType{PRE_ORDER,IN_ORDER,POST_ORDER};

template <class Itemtype>
struct TreeNode
{
    Itemtype info;
    TreeNode *left;
    TreeNode *right;
};


template <class ItemType>
class TreeType
{
public:
    TreeType();
    ~TreeType();

    bool isFull();
    bool isEmpty();
    int lengthIs();

    void insertItem(ItemType item);
    void deleteItem(ItemType item);
    void retrieveItem(ItemType &item,bool &found);
    void resetTree(orderType order);
    void getNextItem(ItemType &item,orderType order,bool &finished);
    void makeEmpty();
    void print();

private:
    TreeNode<ItemType> *root;
    QueType<ItemType> preQue;
    QueType<ItemType> inQue;
    QueType<ItemType> postQue;
};


#endif //TREETYPE_TREETYPE_H
