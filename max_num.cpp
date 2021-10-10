// this program will continue to take input, until the escape code is entered (-1).
// if the escape code is entered, the program will return the max number of the inputs.

#include <iostream>
using namespace std;

int main () {


    int num;

    //taking input
    cout << "Enter the number : " ; cin >> num;

    int max = num;

    //in loop untill the condition if false.
    while (num != -1) {
                
            if(num > max) 
                max = num;

            cin >> num;

    }
//retun the max num
cout << "max number is : " << max << endl;

}