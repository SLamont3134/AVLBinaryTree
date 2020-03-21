
#include "AVLBinarySearchTree.h"
#include "DoubleLinkedList.h"
#include <algorithm>



AVLBinarySearchTree::AVLBinarySearchTree() {
    root = nullptr;
    height = 0;
}


int AVLBinarySearchTree::nodeHeight(AVLBinarySearchTree *T) {
    return T->height;
}

void AVLBinarySearchTree::insert(std::string name, int lineNumber) {
    insert(root, name, lineNumber);
}

void AVLBinarySearchTree::insert(BSTNode *root, std::string name, int lineNumber) {
    if(root == nullptr){//insert into empty list
        root = new BSTNode;
        (*root).data = name;
        (*root).lineList.insert_front(lineNumber);
        (*root).lChild = nullptr;
        (*root).rChild = nullptr;
    } else if ( name < ((*root).lChild->data)){//
        insert(&((*root->lChild)),name, lineNumber);
        //(transform(name.begin(), name.end(), name.begin(), ::tolower))
    }else if ( name < ((*root).rChild->data)){//
        insert(&((*root->rChild)),name, lineNumber);
    }
    else{//found it
        printf_s("Already exists in tree");
        (*root).lineList.insert_front(lineNumber);
    }
}