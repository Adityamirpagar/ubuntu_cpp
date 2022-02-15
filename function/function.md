# Function

Function is kind of a box that can do something useful for us, e.g, to evaluate a value or perform some actions.

*In programming language (cpp) a fuction is a block of code that is used to evaluate some varibles or do a specific task or both. A function can be identified by its name.*

* The name of a function has the same restriction as the variables. And we cannot have same function and variable name.

* A function can modify its values using parameters, parameters may affect what is calculated or what is performed inside the function.


**In genral functions can be divide into two groups:**

1. **Standard library function**: These are predefined function, i.e, written by someone else.
2. **User defined function**: function created by the user.


>* ***When we want to use a particular function to perform its action and/or evaluate, we have to **invoke** it.***
>* *The **function invocation** is a special instruction in the C++ langauage, The invocation has to specify the name of the function being invoked, the parameters that the fuction should use and how to use the result evaluated by the function.*
> * A fuction should't be invoked if it is unknown to the compiler. There are some ways to inform the compiler.

****

## Why do we need functions?

Functions facilitate the creation of programs in multiple ways, it can be said that a large program is nearly impossible to write without using funtions.

* The first function every developer uses is **library function**, and soon it becomes very clear that it won't be sufficient.

* Functions enable developers to divide a problems into smaller parts. A smaller code is easier to write, to test, and to maintain, it's also very easy to understand.

*Its easier to contorl a herd of small and well-defined functions, than one large portion of code that you cant see at a glance.*

****


## Introduction to functions

Each function is characterized by the following traits:

* name
* parameters
* type of result


*The part of the code that specifies all these elements is known as the **function declration***.

* It is used to let compiler know the function declaration, and to enable it to properly interpret the invocations of the function. The function declaration is sometimes called the **function prototype**. 

>* *A function declaration says nothing about what the fuction does exactly, That information is provide by the **function body**, which is a seperate part of the code, enclosed in curly brackets.*
>* *A function declaration enriched with a function body forms the so-called **function definition.***

****

## Function Parameters

A function parameter(argument) is a value that can be passed when declaring the function.

```cpp
void func(int num){
    cout << num << endl;
}
```

Here, the <code>int</code> variable <>num<> is the function parameter.

we pass a value to the function variable while calling the function.

**Example**

```cpp
#include<iostream>

using namespace std;

// defining the function
void func(int num){
    cout << num << endl;
}

int main() {
    int n = 7;
    func(n); //calling funciton and passing the parameter

return 0;
}
```
- Here, the output will be 7, 'cause in the main function we've called the <code>func()</code> function, and passed the argument variable <code>n</code>, which holds the value 7.

**Output**

    7



****
****

## 1. C++ User-defined function

A user-defined function groups code to perform a specific task, and that group of code is given a name (identifier).

*when the function is invoked from any part of the program, it executes all the codes defined in the body of the function.*

### **C++ Function Definition**

The syntax to define a function is:

```cpp
returnType functionName (parameter1, parameter2,...) {
    // function body
}
```

**Example 1 :** Suppose, we want to create a function to greet someone

```cpp
// function declaration
void greet() {
    cout << "Hello World"<< ;
}
```
> Here, 
> * The name (identifier) of the function is <code>greet()</code>.
> * The return type of the function is <code>void</code> (means it. does not have to return anything)
> * The empty parantheses means it doesn't have any parameters.
> * And, finally the function body is written inside <code>{}</code>.


**Example 2 :** Now, suppose that we want to create a function that can evaluate the second power of any <code>float</code> number.

```cpp
// function declaration
float square (float x);
```
> Here,
>* The name (identifier) of the function is <code>square</code>.
>* The return type of the function is <code>float</code>.
>* This function has one parameter <code>x</code>: This value of <code>x</code> will be raised to the power of 2.

*Note: That the first <code>float</code> specifies the type of the result, while the second is the type of the parameter.*

***For taking the full advantage of the function, we need to deliver its definition.***

*Note: Transforming a decalration into definition requires us to add a body. After adding the body the semicolon that ends the declaration is removed. i.e, the function body does not end with with a semicolon.*

*we can say that the semicolon is replace by the function's body.*

```cpp
// function definition
float square (float x) {

    float result = x * x;

    return result;
}
```

> The body contains :
>* A declaration of the variable <code>x</code>.
>* The <code>result</code> is assigned the value of the <code>x</code> parameter, multiplied by itself (it will raise <code>x</code> to the power of 2).
>* The last instruction of the <code>square()</code> function is return:
>>* It indicates which value is returned as the function result.
>>* And, It terminates the execution of the function.

*Note: The variable declared inside a function is only valid inside that function; And try not to leave the variable without any declarations, it can give random results.*


****

### **Function Invocation or Function Calling**

The function calling or invocation is just the name of the function being invoked along with the values transferred (passed) into the functions as arguments.

* The parameters defined within the function are called **formal parameters**.
* The values actually transferred (passed) to the function are called **arguments** or **actual parameters**.

In the above **example 2**, We've defined a function named <code>square()</code>. To use the <code>square()</code> function, we'll have to call it:

```cpp
#include<iostream>
using namespace std;

// defining the function
float square(float x){
    float result = x * x;

    return result;
}

int main(){

    float arg = 2;
//calling the function.
    cout << "The power of " << arg << " is " << square(arg) << endl;

return 0;
}
```

 We've declared the variable <code>arg</code>, and assigned it the value of 2. Next, we've invoked the <code>square()</code> function, delivering the <code>arg</code> variable as its argument.

**Output**
```
The power of 2 is 4
```

****

## Function Prototype

Is it possible to place the <code>square</code> function after the <code>main</code> function and not before ?. Yes, It can be done, but we've to tell the compiler that such a function exist in the code. 

This can be achived using function prototype:

*The function prototyping allows you to put the definition of the function after the <code>main</code> function.* 

**Syntax**

```cpp
returnType functionName (parameterList);
```


> It provides the compiler with information about function name and its parameters. That's why we can use the code to call a function before the function has been defined.

> **To use function prototype just add the function declaration before the first invocation:** 

**Example:**

```cpp
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
```

**Output**
```
The power of 2 is 4
```

*Note: The variable name can be ommitted from the function prototype.*


### **Creating a fully functioning program with 2 function implemented**

It is a program to convert the fahrenheit to celsius.

How this program works:

* User enter the fahrenheit value.

* The program uses a function called <code>fahrenheit_to_celsius()</code>, to convert the fahrenheit values to celsius values.

* The another function called <code>test_the_function()</code>, prints the result of the <code>fahrenheit_to_celsius()</code> function on the screen.

* The main function has a variable that take stores the user input, and passes that input as an argument into the <code>test_the_function()</code> function.


Here is the full program:

```cpp
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

// defining the function to convert fahrenheit to celsius
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
```
**Input**

    32
    212
    43

**Output**

    Fahrenheit 32 is equal to 0 centigrade.
    Fahrenheit 212 is equal to 100 centigrade.
    Fahrenheit 43 is equal to 6.1111 centigrade.

****
****

## **Passing parameters into a function**

In C++ we can pass parameters into a function in different ways. These ways are :-

1. Passing parameter by value.
2. Passing parameter by reference. or Pass by address

### **Passing parameter by value**

If a value is passed into a function argument as value, than the actual value that is passed as argument is not modifid after some operation on it. *By default we use "pass by value"*. 

When pass by value is used, it creates a copy of that variable into the stack section in memory. When the value is changed, it changes the value of that copy, and the actual value remains the same.

**Example: Passing parameter by value**

```cpp
// passing parameter by value
#include <iostream>

using namespace std;

void func(int x){
    x = 50; // changing the value of x
    cout << "The value of func_x is: " << x << endl;
}

int main() {
    int x = 10; // initializing value to x
    func(x); // passing x as argument in the func()
    cout << "The value of x is: " << x << endl; // print the value of x

return 0;
}
```
- Here, we've passed the <code>x</code> into the <code>func()</code> function to modify the value of x. But as it was passed as a value so, its value does not get modified after the operation.

**Output**

```
The value of func_x is: 50
The value of x is: 10
```

### **Passing parameters by referrnce**

If a value is passed into a function using reference, than the actual value that is passed gets modified after some operations on it. we use a reference operator (<code>&</code>) to pass the parameter as reference into a function.

*(using reference operator on a variable gives the address of that variable)*

When use pass by reference, it creates a copy of the reference of that variable into the stack section in memory. So, when value at that reference is modified the actual value also gets modified.

```cpp
// passing parameter by value

#include <iostream>

using namespace std;

// adding the reference operator 
void func(int& x){
    x = 50;
    cout << "The value of func_x is: " << x << endl;
}

int main() {
    int x = 10; // initializing value to x
    func(x); // passing x as argument in the func()
    cout << "The value of x is: " << x << endl; // print the value of x

return 0;
}
```

- Here, we've added the reference operator (which gives the memory address of a variable) in the <code>void func(int &x)</code>. So, we are modifiying the value present at that address, hence the actual value also gets modified

**Output**

```
The value of func_x is: 50
The value of x is: 50
```

**Both style of passing parameters can also be used together:**

*Example: mixed_styles*

```cpp
#include<iostream>

using namespace std;

void mixed_style (int x_val, int& y_ref){
    y_ref = x_val + 1; //changing value passed as reference
    x_val ++;
}

int main() {

    int x = 10, y = 10;

    // x is passed as value and y is passed as reference
    mixed_style(x, y); 

     
    cout <<"The value of x : " << x << endl; // the value of x remains unchanged,
    cout <<"The value of y : " << y << endl; // while, the value of y gets modified

return 0;
}
```

- Here, we've passed the <code>x</code> and <code>y</code> as the argument in the function <code>mixed_styles()</code>, the first argument is passed as a value, while the second argument is passed as a reference.

Hence the value of <code>x</code> remains unchanged, and the value of <code>y</code> gets modified.

**Output**

```
The value of x : 10
The value of y : 11
```