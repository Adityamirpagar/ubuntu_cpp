//edube.org (cpp esentials) 2.3.1.8 (loops).

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

/* The problem with the below loop is that it is checking with -1, to exit the loop.

The problem here is, with the (-1) in the conditional-expression, we cannot use the cout statement. If we do, than the 
program will go on a infinite loop if (.) is entered. 
If we comment the cout statement, the program will take inputs continually after (.) is entered, without any output 
(infinite inputs.)

solve
If we check the coditional-expression with the 0, instead of -1, than we can use the cout statement in the while loop. And 
entering (.) will not affect the program. And it will produce the output of max number.
*/
    /*Solve*/
    //while (num != 0) {
    while (num != -1) {
                
            if(num > max) 
                max = num;

            //cout << "Enter the number: "; 
            cin >> num;
            

    }
//retun the max num
cout << "max number is : " << max << endl;

}