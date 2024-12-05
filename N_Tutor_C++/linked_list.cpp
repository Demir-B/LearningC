#include <iostream>

// element value & pointer
using namespace std;

// int x=0;
// int * x_ptr = &x;

struct twoDpoint{
    float x;
    float y;
};

struct node{
    int value;
    node * next_node;
};

struct list{
    node * first_element;
    int length;
}

void add_element(list L, int value){
    //Todo
}

node create_element(int value){
    //Todo
    //Hint: (You might need malloc ;)
}

void insert_element(int index, int value){
    //Todo (indexing at 0)
    //Hint: Think about edge cases.
}

void remove_element(int index){
    //Todo
}

void print_list(list L){
    //Todo
}





// struct {int x;int y;}   hello;


int main(){
    // hello.x;
    // twoDpoint origin = {0,0};
    // cout << origin.x;

//     twoDpoint array_of_points[3] = {{0,0},{1,2},{1,3}};

//     cout << array_of_points << endl;
//     cout << array_of_points + 1 << endl;

//     cout << array_of_points[2].x << " " << array_of_points[2].y << endl;
//     cout << (*(array_of_points+2)).x << " " << (*(array_of_points + 2)).y << endl;
//     cout << (array_of_points + 2) -> x << " " << (array_of_points + 2) -> y << endl;
    
//     node element1, element2;
//     element1.next_node = &element2;
//     element2.value = 5;

//    cout << (*element1.next_node).value << endl;
//    cout << element1.next_node -> value << endl;

}



