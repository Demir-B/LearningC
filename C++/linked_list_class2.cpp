#include <iostream>

using namespace std;

struct node{
    int value;
    node* next_node;
};

struct list {
    int   length;
    node* first_node;
};

// list coolList = {0,0};

// coolList.length;
// coolList.first_node;

node next_node(node current_node) {
    return *(current_node).next_node;
}

// def do_something2(dictionary):
//     local_dict = dictionary
//     local_dict["new_key"] = 25
//     print("Hi")

// main_dict = {"a":1}
// do_something2(main_dict)
// print(main_dict) # {'a': 1, 'new_key': 25}

node* create_element(int value) {
    node* element = (node*) malloc(sizeof(node));

    element -> value = value;
    cout << "create element:" << element << endl;
    element -> next_node = nullptr;

    return element;
}

list add_element(list L, int value){
    if (L.length==0){
        cout << "first" << endl;
        node * element;
        cout << "address 1" << &element << endl;
        element = create_element(value);
        L.first_node = element;
        cout << "address 3.1" << element << endl;
        cout << "address 3.2" << L.first_node << endl;
        L.length += 1;
        cout << L.first_node -> value << endl;
    }
    // else {
    //     node * current_node = L.first_node;
    //     for (int i=0; i<L.length-1; i++){
    //         current_node = current_node -> next_node;
    //     }
    //     node new_element;
    //     new_element = create_element(value);
    //     current_node -> next_node = &new_element;
    //     L.length += 1;
    // }
    return L;
}

// list add_element(list L, int value) {
//     cout << L.length << endl;
//     int i;
//     node element;
//     cout << "add element 1:" << &element << endl;

//     element = create_element(value);
//     cout << "add element 2:" << &element << endl;
//     cin >> i;
//     if (L.length == 0) {
//         L.first_node = &element;
//     }

//     else if (L.length >= 1) {
//         node current_node = *L.first_node;
//         for (int i = 0; i < L.length - 1; i++) {
//             current_node = next_node(current_node);
//         }
//         current_node.next_node = &element;
//     }

//     L.length += 1;
//     return L;
// }

void insert_element(int index, int value) {

}

void remove_element(int index) {

}

void print_list(list L) {
    node * current_element = L.first_node;
    cout << "1:" << current_element -> value << endl;
    for (int i=0; i<L.length-1; i++){
        current_element = current_element -> next_node;
        cout << i <<":" << current_element -> value << endl;
    }
}

void print_list2(list L){
    // at the moment this fail.
    // for (node * current_node = L.first_node; current_node.next_node != nullptr; current_node = current_node.next_node){

    // }
}

void free_all(list L){

    // free();
}


// void print_list(list L) {
//     node current_node = *L.first_node;
//     cout << "Test1" << endl;
//     cout << current_node.value << endl;
//     cout << "Test2" << endl;
//         for (int i = 0; i < L.length - 1; i++) {
//             current_node = next_node(current_node);
//             cout << current_node.value << endl;
//         }
// }

int main() {
    int i;
    list L = {0,nullptr};
    L = add_element(L, 5);
    cout << "address 4" << L.first_node << endl;
    print_list(L);
    cout << "END OF FIRST LINE" << endl;

    free(L.first_node);
    // cin >>i;
    // cout << "Length"<<L.length << endl;
    // cout << "Main Code 1:" << L.first_node << endl;
    // L = add_element(L, 6);
    // print_list(L);
    // cout << "Length"<<L.length << endl;


    return 0;
} 