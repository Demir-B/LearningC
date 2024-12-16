#include <iostream>

using namespace std;

struct node{
    int value;
    node* next_node;
};

struct list {
    int length;
    node* first_node;
};

node* create_element(int value) {
    node* element = (node*) malloc(sizeof(node));
    element -> value = value;
    element -> next_node = nullptr;
    
    return element;
}

list add_element(list L, int value) {
    if (L.length==0) {
        node* element;
        element = create_element(value);
        L.first_node = element;
    }

    else if (L.length >= 1) {
        node* current_node = L.first_node;
        for (int i = 0; i < L.length - 1; i++) {
            current_node = current_node -> next_node;
        }
        node* element;
        element = create_element(value);
        current_node -> next_node = element;

    }

    L.length += 1;
    return L;
}

list insert_element(list L, int index, int value) {
    node* element;
    element = create_element(value);
    node* current_node = L.first_node; 
    for (int i=0; i<index-1; i++) {
        current_node = current_node -> next_node;
    }

    element -> next_node = current_node -> next_node;
    current_node -> next_node = element;

    L.length += 1;
    return L;
}

list remove_element(list L, int index) {
    node* current_node = L.first_node; 
    for (int i=0; i<index-2; i++) {
        current_node = current_node -> next_node;
    }

    node* element;
    element = current_node -> next_node -> next_node;
    free(current_node -> next_node);
    current_node -> next_node = element;

    L.length += 1;
    return L;
}

void print_list(list L) {
    node* current_node = L.first_node;
    cout << current_node -> value << endl;
    for (int i=0; i<L.length-1; i++) {
        current_node = current_node -> next_node;
        cout << current_node -> value << endl;
    }
}

void free_all(list L) {
    node* current_node = L.first_node;
    node* next_node = current_node -> next_node;
    free(current_node);
    for (int i=0; i<L.length-1; i++) {
        current_node = next_node;
        next_node = current_node -> next_node;
        free(current_node);
    }
}

int main() {
    list L = {0,nullptr};
    L = add_element(L, 5);
    L = add_element(L, 6);
    L = insert_element(L, 1, 0);
    print_list(L);
    L = remove_element(L, 1);   //Not sure if I successfully free the memory yet.
    print_list(L);
    free_all(L);
    return 0;
} 