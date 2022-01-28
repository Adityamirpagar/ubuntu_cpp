#include <iostream>
using namespace std;
int main() {
    int x = 5;

    // declare pointer variable
    int *ptr_p;

    // store address of var
    ptr_p = &x;

    // print value of var
    cout << "x = " << x << endl;

    // print address of var
    cout << "Address of x (&x) = " << &x << endl
         << endl;

    // print pointer pointVar
    cout << "ptr_p = " << ptr_p << endl;

    // print the content of the address pointVar points to
    cout << "Content of the address pointed to by ptr_p (*ptr_r) = " << *ptr_p << endl;
    
    return 0;
}