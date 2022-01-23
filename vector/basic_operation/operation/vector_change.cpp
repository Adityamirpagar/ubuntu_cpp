// changing element in a vector

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<string> fruits {"apple", "orange", "banana", "carrot", "tommato"};

// Printing initial vector
    cout << "Intial vector: " ;
    for(auto i : fruits){
        cout << i << ", ";
    }

// changing the elements
    fruits.at(1) = "avacado";
    fruits.at(4) = "mango";

// Printing updated vector
    cout << "\n\nUpdated vector: ";
    for(auto i : fruits){
        cout << i << ", ";
    }
    cout << endl;

return 0;
}