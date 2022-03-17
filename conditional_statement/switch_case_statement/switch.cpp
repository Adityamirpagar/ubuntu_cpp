// a simple calculator using switch statements
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main() {
   
   int num1, num2, result;
    char oper;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the operator (+, -, *, /, %), to be used: ";
    cin >> oper;

   switch (oper)
   {
   case '+':
       result = num1 + num2;
       cout << "\nThe addition of "<< num1 << oper << num2 << " = " << result << endl; 
       break;
   case '-':
        result = num1 - num2;
        cout << "\nThe substraction of "<< num1 << oper << num2 << " = " << result << endl;
        break;
   case '*':
        result = num1 * num2;
        cout << "\nThe product of "<< num1 << oper << num2 << " = " << result << endl;
        break;
   case '/':
        result = num1 / num2;
        cout << "\nThe division of "<< num1 << oper << num2 << " = " << result << endl;
        break;
   case '%':
        result = num1 % num2;
        cout << "\nThe remainder of "<< num1 << oper << num2 << " = " << result << endl;
        break;
   
   default:
        cout << "\nEnter the valid operator" << endl;
       break;
   }
   
   
return 0;
}