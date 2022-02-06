// write a program to check the bigger number, with 5 inputs.
// loop basic
//conditional statement
#include <iostream>

using namespace std;

int main() {

    int num_1, num_2, num_3, num_4, num_5;

    cout << " Enter the number 1: ";cin >> num_1 ; 
    cout << " Enter the number 2: ";cin >> num_2 ;
    cout << " Enter the number 3: ";cin >> num_3 ;
    cout << " Enter the number 4: ";cin >> num_4 ;
    cout << " Enter the number 5: ";cin >> num_5 ;

    int max_num = num_1;

    if(num_2 > max_num) 
        max_num = num_2 ;
    if(num_3 > max_num) 
        max_num = num_3 ;
    if(num_4 > max_num) 
        max_num = num_4 ;
    if(num_5 > max_num) 
        max_num = num_5 ;

    cout << " max_num is : " << max_num << endl;


    return 0;
}
