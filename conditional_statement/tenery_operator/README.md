# Tenery operator

The operator is also known as the condiional operator, and can be used to replace if else in certain scenarios

## Syntax of tenery operator in C++

A tenery operator evaluates the conditon and based on the condition executes the block of code based on the result of that evaluation

**Syntax**

```cpp
condition ? expression1 : expression2
```
> Here condition is evaluated and:
>> * if the <code>condition</code> is <code>true</code>, expression1 is executed.
>> * And, if the <code>condition</code> is <code>false</code>, <code>expression2</code> is executed.

The tenery operator takes 3 operands (<code>condition, expression1, and expression2</code>), Hence the name tenery operator.

**Example: C++ tenery operator**

```cpp
// this program checks whether the student is passed or failed, using tenery operator
#include <iostream>

using namespace std;

int main(){

    int marks;
    
    // taking input from the user
    cout << "Enter your marks: "; 
    cin >> marks;  // enter the marks

    //tenery operator checks if marks is greater than 40
    string result = (marks >= 40) ? "passed" : "failed";

    cout << "You " << result << " the exam.";



return 0;
}
```
**output1**

```
Enter your marks: 40
You passed the exam.
```
Suppose, the user enters <code>80</code>. Then also the condition <code>marks >= 40</code> evalutes to true. Hence, the first expression <code>"Passed"</code> is assigned to <code>result</code>.

**Output 2**

```
Enter your marks: 39
You passed the exam.
```
if the user enters <code>39</code>. Then the condition <code>marks >= 40</code> evaluates to <code>false</code>. Hence the second expression <code>"failed"</code> is assigned to <code>result</code>.



**NOTE: <code>expression1</code> is executed only when the <code>condition</code> is "true", and if the <code>condition</code> is false <code>exepression2</code> is executed.**
