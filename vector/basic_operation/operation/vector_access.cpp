// access element from a vector.

#include <iostream>
#include <vector>

using  namespace std;

int main(){

    vector<string> fruits {"apple", "orange", "banana", "carrot", "tommato"};

//accessing the elements using at(), function

    cout << "Element at index 1 : " << fruits.at(1) << endl;
    cout << "Element at index 3 : " << fruits.at(3) << endl;
    cout << "Element at index 4 : " << fruits.at(4) << endl;

/*
we can also use "square brackets []" as in array, to access the element.
*/

    cout << "\n\nElement at index 0: " << fruits[0] << endl;
    cout << "Element at index 2: " << fruits[2] << endl;

return 0;
}