//
// Created by canad on 3/11/2020.
//


#include <string>
#include "DoubleLinkedList.h"
struct BSTNode {
    std::string data;
    DoubleLinkedList lineList;
    BSTNode *lChild;
    BSTNode *rChild;
};