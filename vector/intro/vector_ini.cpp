#include<iostream>
#include<vector>

using namespace std;

int main(){

/* method 1 */

// initializer list
    vector<int> num1 = {1,2,3,4,5};
    
//uniform initialization
    vector <int> num2 {6,7,8,9,10};

/* method 2 */
    vector <int> num3(5, 12);

/*
auto can be used, 'cause ranged loop iterates over values rather than indces
value of the vector is assigned to the ranged loop variable.
*/

// ranged loop 
cout << "\n\nvector 1: ";
for(int i : num1){
    cout << i << " ";
}

//ranged loop 
cout << "\n\nVector 2: ";
for(int i : num2){
    cout << i << " ";
}

//ranged loop
cout << "\n\nVector 3: ";
for(auto i : num3){
    cout << i << " ";
}

return 0;
}