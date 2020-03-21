#ifndef DOUBLELINKEDLIST_DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_DOUBLELINKEDLIST_H

#include <iostream>
#include "stdio.h"
#include "Node.cpp"


class DoubleLinkedList {
private:
    node *front;
    node *rear;
    int size;

public:

    DoubleLinkedList();

    void insert_front(int data);

    void insert_front(void *data);

    void insert_rear(int data);

    void insert_rear(void *data);

    int remove_front_i();

    void *remove_front_p();

    int remove_rear_i();

    void *remove_rear_p();

    int listSize();

    void print();
};


#endif //DOUBLELINKEDLIST_DOUBLELINKEDLIST_H
