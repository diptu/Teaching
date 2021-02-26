#include "binarysearchtree.h"
//#include "binarysearchtree.cpp"
#include "quetype.cpp"
using namespace std ;

template <class T>
TreeType<T> :: TreeType () {
    root = NULL ;
}

template <class T>
void Destroy (TreeNode<T> *& tree) {
    if (tree == NULL) {
        Destroy (tree->left) ;
        Destroy(tree-> right) ;
        delete tree ;
        tree = NULL ;
    }
}

template <class T>
TreeType<T> :: ~TreeType () {
    Destroy(root ) ;
}

template <class T>
bool TreeType<T> :: IsEmpty () {
    return root ==NULL  ;

}

template <class T>
bool TreeType<T> :: IsFull () {
    TreeNode<T> * l ;
    try {
    l = new TreeNode <T> ;
    delete l ; return false ;
    } catch (bad_alloc& exception ) {
        return true;
     }
}

template <class T>
int CountNodes (TreeNode <T> * tree ) {
    if (tree == NULL )  return 0 ;
    else return CountNodes(tree->left) + CountNodes(tree->right) +1  ;
}
template <class T>
int  TreeType<T> :: LengthIs () {
    return CountNodes(root) ;
}




template <class T>
void Retrieve (TreeNode<T> *tree , T item , bool& found) {
    if (tree == NULL)
        found = false ;
    else if (item < tree->info)
        return Retrieve(tree->left , item , found ) ;
    else if (item > tree->info  )
        return Retrieve(tree->right , item , found) ;
    else {
        item = tree->info ;
        found = true ;
    }
}


template <class T>
void TreeType<T> :: RetrieveItem(T& item , bool& found ) {
    Retrieve(root , item , found ) ;
}


template <class T>
void Insert (TreeNode <T> *& tree , T item ) {
    if (tree == NULL) {
        tree = new TreeNode<T> ;
        tree->right = tree->left = NULL ;
        tree->info = item ;
    }
    else if (item < tree->info)
        Insert(tree->left , item) ;
    else
        Insert(tree->right , item) ;
}
template <class T>
void TreeType<T> :: InsertI(T item  ) {
    Insert (root , item ) ;
}


template <class T>
void Delete (TreeNode <T> *& tree , T item ) {
    if (item < tree->info) Delete(tree->left , item) ;
    else if (item > tree-> info) Delete (tree-> right , item );
    else DeleteNode(tree) ;
}
template <class T>
void DeleteNode (TreeNode<T> *& tree) {
    T data ;
    TreeNode <T> * tempPtr ;
    tempPtr= tree ;
    if (tree->left== NULL) {
        tree= tree -> right ;
        delete tempPtr ;
    }
    else if (tree->right == NULL) {
        tree= tree->left ;
        delete tempPtr ;
    }
    else {
        GetPredecessor (tree->left , data ) ;
        tree->info = data ;
        Delete (tree->left , data ) ;
    }
}

template <class T>
void GetPredecessor (TreeNode<T> *tree , T& data ) {
    while (tree->right != NULL)
        tree = tree->right ;
    data = tree->info ;
}
template <class T>
void TreeType<T> :: DeleteItem (T item) {
    Delete(root , item ) ;
}




template <class T>
void PreOrder(TreeNode<T>*tree ,QueType<T>&Que) {
    if (tree!= NULL) {
        Que.Enqueue(tree->info) ;
        PRE_ORDER (tree->left , Que) ;
        PRE_ORDER (tree->right , Que) ;
    }
}

template <class T>
void InOrder(TreeNode <T>  *tree , QueType<T> &Que) {
    if (tree!= NULL) {
        IN_ORDER (tree->left , Que) ;
        Que.Enqueue(tree->info) ;
        IN_ORDER (tree->right , Que) ;
    }
}
template <class T>
void PostOrder (TreeNode <T>  *tree , QueType<T> &Que) {
    if (tree!= NULL) {
        POST_ORDER (tree->left , Que) ;
        POST_ORDER (tree->right , Que) ;
        Que.Enqueue(tree->info) ;
    }
}



template <class T>
void TreeType<T> :: ResetTree (OrderType order) {
    switch (order) {
    case PRE_ORDER :
        PRE_ORDER(root, preQue )  ;
        break;
    case IN_ORDER :
        IN_ORDER(root, inQue) ;
    case POST_ORDER:
        POST_ORDER(root,postQue) ;
    }

}




template <class T>
void TreeType<T> :: GetNextItem (T& item , OrderType order ,  bool & finished ) {
    finished = false ;
    switch (order){
case PRE_ORDER:
    preQue.Dequeue(item ) ;
    if (preQue.IsEmpty ())
        finished=true ; break ;
case IN_ORDER:
    inQue.Dequeue (item) ;
    if (inQue.IsEmpty ())
        finished = true ; break ;
case POST_ORDER:
    postQue.Dequeue (item) ;
    if (postQue.IsEmpty ())
        finished = true ; break ;
    }
}



template <class T>
void PrintTree (TreeNode<T> *tree ) {
    if (tree!= NULL) {
        PrintTree(tree->left) ;
        cout<< tree->info << " " ;
        PrintTree(tree->right) ;

    }
}

template <class T>
void TreeType<T> ::Print(){
    PrintTree(root);
}
