// Iterating through the vector using for loop

#include<iostream>
#include <vector>

using namespace std;

int main() {

// vector initialization
    vector<int> num {1,2,3,4,5,6};

// iterator declaration
    vector<int>::iterator iter;

// looping through the vector
for(iter = num.begin(); iter != num.end(); ++iter){
    cout << *iter << ", ";
}

cout << endl;

return 0;
}