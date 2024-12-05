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



// struct {int x;int y;}   hello;


int main(){
    // hello.x;
    // twoDpoint origin = {0,0};
    // cout << origin.x;

    twoDpoint array_of_points[3] = {{0,0},{1,2},{1,3}};

    cout << array_of_points << endl;
    cout << array_of_points + 1 << endl;

    cout << array_of_points[2].x << " " << array_of_points[2].y << endl;
    cout << (*(array_of_points+2)).x << " " << (*(array_of_points + 2)).y << endl;
    cout << (array_of_points + 2) -> x << " " << (array_of_points + 2) -> y << endl;
    
    node element1, element2;
    element1.next_node = &element2;
    element2.value = 5;

   cout << (*element1.next_node).value << endl;
   cout << element1.next_node -> value << endl;

}



