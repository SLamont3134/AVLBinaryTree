
#include "DoubleLinkedList.h"

//The class used to test Double LinkedList.cpp
int main() {
    //std::cout << "Hello, World!" << std::endl;
    DoubleLinkedList *DLL = new DoubleLinkedList;
    int *test = nullptr;
    printf_s("Test empty case 4 times\n");
    DLL->remove_rear_i();
    DLL->remove_front_i();
    DLL->remove_front_p();
    DLL->remove_rear_p();

    printf_s("filling list with ints 1-100\n");
    for (int i = 100; i > 0; i--) {
        DLL->insert_front(i);
    }
    DLL->print();
    printf_s("\nThe size of the list is %d \n", DLL->listSize());

    printf_s("Removed from front and bak 25 times\n");
    for (int i = 0; i < 25; i++) {
        printf_s("Removed:%d ", DLL->remove_front_i());
        printf_s("Removed:%d ", DLL->remove_rear_i());
    }
    DLL->print();
    printf_s("\nThe size of the list is %d \n", DLL->listSize());

    printf_s("Inserting pointers pointing to ints 30000-0 halfing everytime \n");
    for (int i = 30000; i > 0; i = i / 2) {
        test = (int *) i;
        DLL->insert_front(test);
        DLL->insert_rear(test);
    }
    DLL->print();
    printf_s("\nThe size of the list is %d \n", DLL->listSize());

    printf_s("Removing the pointers that were just added");
    for (int i = 30000; i > 0; i = i / 2) {
        printf_s("%d ", (int *) DLL->remove_front_p());
        printf_s("%d ", (int *) DLL->remove_rear_p());
    }
    DLL->print();
    printf_s("\nThe size of the list is %d \n", DLL->listSize());

    return 0;
}
