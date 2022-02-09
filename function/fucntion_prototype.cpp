#include<iostream>

using namespace std;

float square(float); //function prototype

int main(){

    float arg = 2;
// Calling the function
    cout << "The power of " << arg << " is " << square(arg) << endl;

return 0;
}

// defining the function
float square(float x){
    float result = x * x;

    return result;
}