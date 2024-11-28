#include <iostream>

using namespace std;

// namespace DemirVariables{
//     int x = 5;
// }

int main() {
    // DemirVariables::x += 1;
    //no more printf()

    int x;

    cout << "Hello World" << endl;
    
    cout << "Input an integer:" << endl;
    cin >> x;
    cout << "The number was: " << x << endl;

    int y[3] = {1,3,4};
    int z[3];

    //int y[3];
    //y[0] = 1;
    //y[1] = 2;
    //y[2] = 3;

    cout << y << endl;
    cout << *y << endl;
    //cout << y[0] << endl;
    cout << *(y + 1) << endl;
    //cout << *y + 1 << endl;

    for (int i=0; i<3; i++) {
        cin >> z[i];
    }

    string word;
    cin >> word;
    cout << word << endl;

    //vector<int>(3) my_vec;

    return 0;
}