#include <iostream>

using namespace std;

struct twoDpoint{
    float x;
    float y;
};

struct node{
    int value;
    node * next_node;
};

int main() {
    twoDpoint origin = {0,0};
    cout << origin.x;

    twoDpoint array_of_points[3] = {{0,0},{1,2},{3,4}};

    cout << array_of_points << endl;
    cout << array_of_points + 1 << endl;

    cout << array_of_points[2].x << " " << array_of_points[2].y << endl;
    cout << (*(array_of_points+2)).x << " " << (*(array_of_points+2)).y << endl;
    cout << (array_of_points+2) -> x << " " << (array_of_points+2) -> y << endl;

    node element1, element2;
    element1.next_node = &element2;
    element2.value = 5;

    cout << (*element1.next_node).value << endl;
    cout << element1.next_node -> value << endl;

    return 0;
}