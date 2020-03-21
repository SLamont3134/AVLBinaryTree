
#include "DoubleLinkedList.h"

//The main constructor for the class
DoubleLinkedList::DoubleLinkedList() {
    front = nullptr;
    rear = nullptr;
    size = 0;
}

//Inserts an integer into the front of the list
void DoubleLinkedList::insert_front(int data) {
    node *p;
    p = new node;
    //if failed to create new node
    if (p == nullptr) {
        printf_s("Critical Error");
    } else if (front == nullptr && rear == nullptr) { // empty list
        front = p;
        rear = p;
        p->next = nullptr;
    } else { //regular situation
        front->prev = p;
        p->next = front;
        p->prev = nullptr;
        front = p;
    }
    size++;
    p->pntrData = nullptr;
    p->intData = data;
}

//Inserts a pointer of any type into the front of the list
void DoubleLinkedList::insert_front(void *data) {
    node *p;
    p = new node;
    //if failed to create node
    if (p == nullptr) {
        printf_s("Critical Error");
    } else if (front == nullptr && rear == nullptr) { // if empty list
        front = p;
        rear = p;
        p->next = nullptr;
    } else { // regular situation
        front->prev = p;
        p->next = front;
        p->prev = nullptr;
        front = p;
    }
    size++;
    p->pntrData = data;
    p->intData = -256;
}

//Inserts an integer into the rear of the list
void DoubleLinkedList::insert_rear(int data) {
    node *p;
    p = new node;
    if (p == nullptr) { // if failed to create node
        printf_s("Critical Error");
    } else if (front == nullptr && rear == nullptr) { // if empty list
        front = p;
        rear = p;
        p->next = nullptr;
    } else { // regular situation
        rear->next = p;
        p->prev = rear;
        p->next = nullptr;
        rear = p;
    }
    size++;
    p->pntrData = nullptr;
    p->intData = data;
}

void DoubleLinkedList::insert_rear(void *data) {
    node *p;
    p = new node;
    if (p == nullptr) { //if failed to create node
        printf_s("Critical Error");
    } else if (front == nullptr && rear == nullptr) { //if empty list
        front = p;
        rear = p;
        p->next = nullptr;
    } else { // regular situation
        rear->next = p;
        p->prev = rear;
        p->next = nullptr;
        rear = p;
    }
    size++;
    p->pntrData = data;
    p->intData = -256;
}

int DoubleLinkedList::remove_front_i() {
    int hold;
    if (front == nullptr) { // empty list
        printf_s("The list is empty\n");
    } else if (front == rear) { // one link in list
        hold = front->intData;
        delete front;
        size--;
    } else { //regular situation
        hold = front->intData;
        front = front->next;
        delete front->prev;
        front->prev = nullptr;
        size--;
    }
    return hold;
}

void *DoubleLinkedList::remove_front_p() {
    void *hold;
    if (front == nullptr) { // empty list
        printf_s("The list is empty\n");
    } else if (front == rear) { //single link in list
        hold = front->pntrData;
        delete front;
        size--;
    } else { //regular situation
        hold = front->pntrData;
        front = front->next;
        delete front->prev;
        front->prev = nullptr;
        size--;
    }
    return hold;
}

int DoubleLinkedList::remove_rear_i() {
    int hold;
    if (rear == nullptr) { //empty list
        printf_s("The list is empty\n");
    } else if ((front == rear)) { //single link in list
        hold = rear->intData;
        delete rear;
        rear = nullptr;
        front = nullptr;
        size--;
    } else { // regular situation
        hold = rear->intData;
        rear = rear->prev;
        delete rear->next;
        rear->next = nullptr;
        size--;
    }
    return hold;
}

void *DoubleLinkedList::remove_rear_p() {
    void *hold;
    if (rear == nullptr) { // empty list
        printf_s("The list is empty\n");
    } else if ((front == rear)) { //single link in list
        hold = rear->pntrData;
        delete rear;
        rear = nullptr;
        front = nullptr;
        size--;
    } else { //regular situation
        hold = rear->pntrData;
        rear = rear->prev;
        delete rear->next;
        rear->next = nullptr;
        size--;
    }
    return hold;
}

//Returns the list size as an int
int DoubleLinkedList::listSize() {
    return (size);
}

//Goes through list and prints all elements separated by commas.
void DoubleLinkedList::print() {
    node *p;
    p = front;
    printf_s("[");
    while (p != nullptr) {
        //if int node
        if (p->pntrData == nullptr) {
            printf_s("%d", p->intData);
        }
            //if pointer node
        else if (p->intData == -256) {
            printf_s("%d", p->pntrData);
        }
        p = p->next;
        if (p != nullptr) {
            printf_s(",");
        }
    }
    printf_s("]\n\n");
}
