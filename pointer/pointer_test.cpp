/* 
    add this example into the pointer example.
    i also could have used the tenery operation, but i've already created this function so let it be.


*/

#include<iostream>
#include<vector>

using namespace std;

// function for checking, if the poninter ptr1 is equal to ptr2, or not.
void check (int *ptr1, int *ptr2);

int main() {

    vector<int> arr{1,2,3};

    int *ptr1 = arr.data(); // ptr1 is at arr[0]
    int *ptr2 = nullptr;


// 1.  Putting both the pointer at the position 0, i.e is arr[0]
    ptr2 = ptr1; // This will set pointer ptr2 to arr[0] as well.

// print true, beacause they are at the same position in the array, hece at the same element.
    check(ptr1, ptr2);

    cout << " Pointer ptr1 is = " << *ptr1 << endl;
    cout << " Pointer ptr2 is = " << *ptr2 << "\n\n";


// 2. Lets add 1 (integer) to the pointer ptr2, (same effect can be achived by ptr2++, i.e, using an incrementing operator)
    ptr2 = ptr2 + 1;
    //ptr2++;   

// print false because pointer ptr2 is at arr[1] 
    check(ptr1 , ptr2);

    cout << " Pointer ptr1 is = " << *ptr1 << endl;
    cout << " Pointer ptr2 is = " << *ptr2 << "\n\n";


// 3. Now, lets substract pointer ptr1 form the pointer ptr2
    //(as we know that substacting pointer form pointer gives integer, so w'll use int i.)
    int i = 0;
    i = ptr2 - ptr1;

    check(ptr1 , ptr2);

    cout << " Pointer ptr1 is = " << *ptr1 << endl;
    cout << " Pointer ptr2 is = " << *ptr2 << "\n\n";

    cout << "ptr2 - ptr1 = " << i << endl;

    





return 0;
}


// Comparing pointer with another pointer
void check(int *ptr1, int *ptr2){

    // check if ptr1 is equal to ptr2, or not. 
    bool i = (ptr1 == ptr2);

    if( ptr1 == ptr2)
        cout << "Pointer ptr1 is equal to ptr2: "<< boolalpha << i << endl;
    else
        cout << "Pointer ptr1 is not-equal to ptr2: " << boolalpha << i << endl;


}