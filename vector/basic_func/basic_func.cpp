// basic function of the vector

#include<iostream>
#include<vector>

using namespace std;

int main() {

vector<int> num{1,2,3,4,5,6,7,8,9};

// Initial vector
cout << "Initial vector: ";
for(auto i : num){
    cout << i << ", " ;
}

// Size
cout << "\n\nSize of the vector is: " << num.size();

// Capacity
cout << "\nCapacity of the vector is: " << num.capacity();

// Front
cout << "\nFirst element is: " << num.front();

// Back
cout << "\nLast element is: " << num.back();


// Empty
if(num.empty() == 1){
    cout << "\nVector is empty. ";
} else {
    cout << "\nVector is not empty. ";
}

// Clear
num.clear();
cout << "\n\nUsing clear(), function. ";
if(num.empty() == 1){
    cout << "\nVector is empty. ";
} else {
    cout << "\nVector is not empty. ";
}

// Updated vector
cout << "\n\nUpdated vector: ";
for(int i : num){
    cout << i << ", ";
}

cout << endl;

return 0;
}
