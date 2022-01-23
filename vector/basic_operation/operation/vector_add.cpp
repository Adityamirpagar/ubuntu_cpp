// adding element to the vector

#include <iostream>
#include <vector>

using  namespace std;

int main() {

vector<int> num {1,2,3,4,5};

//Initial vector
cout << "Inital vector: ";
for(int i : num){
    cout << i << " ";
}

num.push_back(6);
num.push_back(7);

// updated vector

cout << "\n\nUpdated vector: ";
for(int i : num){
    cout << i << " ";
}

return 0;
}