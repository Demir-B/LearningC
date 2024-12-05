#include <iostream>
// #include <string>

using namespace std;

// namespace DemirVaribales{
//     int x = 5;

//     void say_hi(){
//         cout << "Hi" << endl;
//     }
// }




int main(){
    // DemirVaribales::x  +=1;

    // DemirVaribales::say_hi();
    // printf();
    int x;

    int y[3]; // = {1,2,3};

    // char string_chars[10];

    string word;
    vector<int> my_vec;

    // y[0] = 1;
    // y[1] = 3;
    // y[2] = 4;

    cin >> word;

    cout << "next";

    for (int i=0; i<3 ; i++){
        cin >> y[i];
    }

    cout << "Hello World" << endl;

    cout << y << endl;
    cout << *y << endl;
    // cout << y[0] << endl;
    cout << *(y+1) << endl;
    cout << *y+1 << endl;

    

    // cin >> x;
    // cout << "The number was: " << x << endl;

    return 0;
}