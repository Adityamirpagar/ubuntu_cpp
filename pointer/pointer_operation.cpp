#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector <int> arr{1,2,3};

    int *ptr1 = arr.data(); //ptr1 is at arr[0]
    int *ptr2;

// both the pointers are now at the same position
ptr2 = ptr1; // ptr2 is also now at arr[0]

// addition: ptr2 is shifted by 1 place right
ptr2 = ptr2 + 1; // ptr2 is now at arr[1]

// incrementation: ptr2 is again shifted by 1 place right
ptr2++; //ptr2 is now at arr[2]

// substraction: ptr2 is shifted 1 place to the left
ptr2 = ptr2 - 1; // ptr2 is now at arr[1]


// addition: ptr1 is shifted 1 palce to the right.
ptr1 = ptr1 + 2; // ptr1 is now at arr[2]

cout << "Final value of the ptr1 is: " << *ptr1<< endl; // final position of the pointer ptr1 is arr[2]

cout << "Final value of the ptr2 is: " << *ptr2<< endl; // final position of the pointer ptr2 is arr[1]

// Comparision: ptr1 is compared with ptr, using tenory operator

string result = (ptr1 == ptr2) ? "is equal to" : "is not equal to";

cout << "ptr1 "  << result << " ptr2" << endl;  

return 0;
}