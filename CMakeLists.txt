cmake_minimum_required(VERSION 3.15)
project(DoubleLinkedList)

set(CMAKE_CXX_STANDARD 14)

add_executable(DoubleLinkedList main.cpp DoubleLinkedList.cpp DoubleLinkedList.h Node.cpp AVLBinarySearchTree.cpp AVLBinarySearchTree.h BSTNode.cpp)