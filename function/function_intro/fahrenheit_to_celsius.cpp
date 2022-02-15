// create a program that can convert the fahrenheit value to celsius

#include<iostream>

using namespace std;

float fahrenheit_to_celsius(float); // function prototyping
void test_the_function(float); // function prototyping

int main() {

    float i = 0;
    cin >> i;

    test_the_function(i);

return 0;
}

// defining the function to covert fahrenheit to celsius
float fahrenheit_to_celsius (float temp)
{
    temp = ((temp - 32.0) * 5) / 9 ;
    
    return temp;
}

// defining the function to print the fahrenheit to celsius result
void test_the_function(float temp)
{
    cout << "Fahrenheit " << temp << " is equal to " << fahrenheit_to_celsius(temp) << " centigrade." << endl;

}
