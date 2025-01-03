#include <iostream>

using namespace std;

struct node{
    int value;
    node* previous_node;
    node* next_node;
};

struct list {
    int length;
    node* first_node;
};

node* create_element(int value) {
    node* element = (node*) malloc(sizeof(node)); 
    element -> value = value;
    element -> previous_node = nullptr;
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
        element -> previous_node = current_node;

    }

    L.length += 1;
    return L;
}

list insert_element(list L, int index, int value) {
    node* element;
    element = create_element(value);
    node* current_node = L.first_node; 

    if (index == 0) {
        L.first_node = element;
        element -> next_node = current_node;
        current_node -> previous_node = element;
    }

    else if (index == L.length) {
        for (int i=0; i<index-1; i++) {
            current_node = current_node -> next_node;
        }
        
        current_node -> next_node = element;
        element -> previous_node = current_node;
    }

    else {
        for (int i=0; i<index-1; i++) {
            current_node = current_node -> next_node;
        }

        (current_node -> next_node) -> previous_node = element;
        element -> next_node = current_node -> next_node;
        element -> previous_node = current_node;
        current_node -> next_node = element;
    }

    L.length += 1;
    return L;
}

list remove_element(list L, int index) {
    node* current_node = L.first_node; 

    if (index == 0) {
        node* element;
        element = current_node -> next_node;
        element -> previous_node = nullptr;
        L.first_node = current_node -> next_node;
        free(current_node);
    }

    else if (index == (L.length - 1)) {
        for (int i=0; i<index; i++) {
            current_node = current_node -> next_node;
        }

        node* element;
        element = current_node -> previous_node;
        element -> next_node = nullptr;
        free(current_node);
    }

    else {
        for (int i=0; i<index; i++) {
            current_node = current_node -> next_node;
        }

        node* element;
        element = current_node -> previous_node;
        element -> next_node = current_node -> next_node;
        element = current_node -> next_node;
        element -> previous_node = current_node -> previous_node;
        free(current_node);
    }

    L.length -= 1;
    return L;
}

void print_list(list L) {
    node* current_node = L.first_node;
    cout << "Current Value: " << current_node -> value;
    cout << ",Next Value: " << current_node -> next_node -> value << endl;
    for (int i=0; i<L.length-2; i++) {
        current_node = current_node -> next_node;
        cout << "Current Value: " << current_node -> value;
        cout << ",Previous Value: " << current_node -> previous_node -> value;
        cout << ",Next Value: " << current_node -> next_node -> value << endl;
    }
    current_node = current_node -> next_node;
    cout << "Current Value: " << current_node -> value;
    cout << ",Previous Value: " << current_node -> previous_node -> value << endl;
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
    L = add_element(L, 0);
    L = add_element(L, 2);
    L = insert_element(L, 1, 1);
    L = add_element(L, 3);
    print_list(L);
    cout << " " << endl;
    L = remove_element(L, 3);
    print_list(L);
    cout << " " << endl;
    L = insert_element(L, 0, 100);
    L = insert_element(L, 4, 4);
    print_list(L);
    free_all(L);
    return 0;
} 