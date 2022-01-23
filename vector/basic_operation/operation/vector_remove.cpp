// removing an element from the vector

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<string> fruits {"apple", "orange", "banana", "carrot", "tommato"};

// Printing initial vector
    cout << "Inital vector: ";
    for(auto i : fruits){
        cout << i << ", ";
    }

// Removing the element 
    fruits.pop_back(); // only removes last element

// Printing updates vector
    cout << "\n\nUpdates vector: ";
    for(auto i : fruits){
        cout << i << ", ";
    }
    cout << endl;


return 0;
}