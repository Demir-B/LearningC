#include <iostream>
#include "linked_list.h"

int main() {
    list L = {0,nullptr};
    // print_list(L);
    // L = insert_element(L, 1, 0);
    // print_list(L);
    L = add_element(L, 5);
    print_list(L);
    L = add_element(L, 6);
    print_list(L);
    L = insert_element(L, 1, 0);
    print_list(L);
    L = remove_element(L, 1);   //Not sure if I successfully free the memory yet.
    print_list(L);
    free_all(L);

    // list L2 = heap_sort(L);
    return 0;
}