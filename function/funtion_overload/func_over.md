# Function Overloading 

Function overloding is a feature in C++ where two functions can have the same name, if the type of arguments passed is different.

These functions have the same name but different (data) type arguments are known as overloaded function.

```cpp
// same name different arguement

int func() {} // empty argument

int func(int a) {} // integer as argument

double func(double a) {} // double as argument

bool func(bool a) {} // bool as argument
```
- *Note: these 4 functions have same name, but different type of argument*


```cpp
// error

int func(int a) {} // return type is int, and argument is also int.

double func(int a) {} // return type is double, and argument is int
```
- *Note: Here both function has different return type, but same argument type. This will confuse the compiler and it will generate error.*


****

## What compiler takes into consideration while choosing the one target function.

### 1. **The number of argument**: for example, if there are three overloaded fuctions with 2, 3, and 4 parameters respectively. And the invocation specifies two arguments, So only the function  that has 2 parameter may be used as a target. This process of selecting function is called *the best candidate*

**Example for the best candidate**

```cpp
#include<iostream>

using namespace std;

// funtion with 2 parameters
int func(int a, int b){
    cout <<"a = " << a << endl;
    cout <<"b = " << b << endl;
return 0;
}

// function with 3 parameters
int func (int a, int b, int c){
    cout <<"a = " << a << endl;
    cout <<"b = " << b << endl;
    cout <<"c = " << c << endl;
return 0;
}

// function with 4 parameters
int func (int a, int b, int c, int d){
    cout <<"a = " << a << endl;
    cout <<"b = " << b << endl;
    cout <<"c = " << c << endl;
    cout <<"d = " << d << endl;
return 0;
}

int main(){
    
    int i = 5, j = 10, k = 15, l = 20; // integer values

    func(i,j); // function invocation

return 0;
}
```

- Here, the function invocation has 2 parameters, so it will choose the function with 2 parameters. ( in this case the target function is <code>func(int a, int b); </code>) **This is known as the best candidate.**

**Output**

```
a = 5
b = 10
```

Suppose, that the invocation has 3 parameters, So it will choose the function with 3 parameters.

```cpp
func(i, j, k); // in this case the function with 3 parameters
```
- Here the function invocation has 3 parametes, So the target function will be the function with the 3 arguments ( in this case its <code>func(int a, int b, int c);</code>).

**Output**

```
a = 5
b = 10
c = 15
```


###  2 . **The type of argument:** for example, if there are two function with same name and, same number of parameters. The target function is selected on the basis of the **parameters type conformity.**

**Example: parameters type conformity**

```cpp
#include <iostream>

using namespace std;

// function with 3 int type parameters
int func(int a, int b, int c)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}

// function with 3 double type parameter
int func(double a, double b, double c)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}

int main()
{
    int i = 5, j = 10, h = 15;

    func(i, j, h); // function invocation

    return 0;
}
```

- Here the both functions <code>func()</code> has same name and, same number of parameters. And the invoacation is type <code>int</code>. The target function is the fuction that has <code>int</code> type parameters (in this case its <code>func(int a, int b, int c);</code>).

**Output**

```
a = 5
b = 10
c = 15
```

And, if the invocation has the type <code>double</code> value, then the target fuction will be funciton with <code>double</code> type parameters (in this case it's <code>func(double a, double b, double c)</code>.)

```cpp
double i = 5.1, j = 10.1 , h = 15.1; // double values

func(i, j, h); // function invocation
```
- Here, the invocation has <code>double</code> type arguments, So the target function will be the function with <code>double</code> type parameter.

**Output**

```
a = 5.1
b = 10.1
c = 15.1
```

**Note: the <code>return</code> type is not taken into consideration, when the compiler is looking for the best candidate for certain invocation. Which means if two functions that are only distinguishable by the <code>return</code> type is not valid/worng**

```cpp
int func (int a){

    return a;
}

void func (int a) {

}
```
- Here, both the function has same name and same number of parameter and are only differ in <code>return</code> type.
The above implementation is wrong and invalid.

****

