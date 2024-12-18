#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Add structs into 

struct node{
    int value;
    node* next_node;
};

struct list {
    int length;
    node* first_node;
};

node* create_element(int value);
list add_element(list L, int value);
list insert_element(list L, int index, int value);
list remove_element(list L, int index);
void print_list(list L);
void free_all(list L);

#endif