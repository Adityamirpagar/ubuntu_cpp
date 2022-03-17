# Switch statement

Switch case statements help in testing the equlity of a varaiable or expression against a set of values and provide a good alternative for long if statements.

**Syntax**

```cpp
switch (expression)
{
    case constant 1:
        // code to be executed
        break;
    case constant 2:
        // code to be executed
        break;
    case constant 3:
        // code to be executed
        break;

    default:
        // code to be executed

return 0;
}
```

The expression is evaluted once and must evaluate to a "constant" value and compered with the value of each `case` label (constant 1, constant 2, constant 3, ... constant n).

* if a match is found corresponding to a case lable, then the code following is executed until `break` statement is encountered or the control flow reaches the end of the `switch` block.

* if there is no match, the code after `default` is excuted.

* The `default` statement is optional. If there is no match there is no action take place and control reaches the end of the `switch` block in absence of the defalut statement.

* The `break` statement is also optional and code corresponding to all case lable gets executed after the matching case, until a `break` statement is encountered.

* There cannot be duplicate case values.

* The `default` statement always gets executed if there is no `break` statement following the matching case or no match is found.


**Example:**
 
Creating a simple calculator using swich statement.

```cpp
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
```

**Output**

```
----------
output 1:
----------

Enter the first number: 2
Enter the second number: 2
Enter the operator (+, -, *, /, %), to be used: +

The addition of 2+2 = 4

----------
output 2:
----------

Enter the first number: 2
Enter the second number: 3
Enter the operator (+, -, *, /, %), to be used: *

The product of 2*3 = 6
```
