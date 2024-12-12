#include <iostream>

using namespace std;

struct node{
    int value;
    node * next_node;
};

struct list {
    int length;
    node * first_node;
};

node next_node(node current_node) {
    return *(current_node).next_node;
}

node create_element(int value) {
    node element;
    element.value = value;
    return element;
}

list add_element(list L, int value) {
    cout << L.length << endl;
    node element;
    element = create_element(value);
    if (L.length == 0) {
        L.first_node = &element;
    }

    else if (L.length >= 1) {
        node current_node = *L.first_node;
        for (int i = 0; i < L.length - 1; i++) {
            current_node = next_node(current_node);
        }
        current_node.next_node = &element;
    }

    L.length += 1;
    return L;
}

void insert_element(int index, int value) {

}

void remove_element(int index) {

}

void print_list(list L) {
    node current_node = *L.first_node;
    cout << "Test1" << endl;
    cout << current_node.value << endl;
    cout << "Test2" << endl;
        for (int i = 0; i < L.length - 1; i++) {
            current_node = next_node(current_node);
            cout << current_node.value << endl;
        }
}

int main() {
    list L = {0,0};
    L = add_element(L, 5);
    L = add_element(L, 6);
    print_list(L);

    return 0;
} 