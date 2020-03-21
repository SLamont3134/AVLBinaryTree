//
// Created by canad on 3/11/2020.
//

#ifndef DOUBLELINKEDLIST_AVLBINARYSEARCHTREE_H
#define DOUBLELINKEDLIST_AVLBINARYSEARCHTREE_H


#include <string>
#include "BSTNode.cpp"
#include <iostream>

class AVLBinarySearchTree {

private:
    BSTNode *root;
    int height;

public:

    AVLBinarySearchTree();

    int nodeHeight(AVLBinarySearchTree *T);

    void S_Rotate_Left(node **T);

    void D_Rotate_Right(node **T);

    void insert(std::string name, int lineNumber);

    void insert(BSTNode *root, std::string name, int lineNumber);

};


#endif //DOUBLELINKEDLIST_AVLBINARYSEARCHTREE_H
