# Pointer

**Pointers are used to store information about the location (address) of any other variable.** *

> *Pointers are used to store address, rather than values*
> >Imagine, **Pointers** like a **signposts**, They dont say about the place itself, but they do show (point) the direction and how to reach it.

The important difference between the values and address of a variable is that : -

* The value of the variable is, what the variable stores.
* And, the address of the variable is the information about, where this variable is palced in computer's memory.


****


## Declaration of Pointer

To declare a pointer an astrisk <code>( * )</code> is put in front of the name. And we'll use prefix <code>ptr_ </code> (ptr underscore) to not get confused, with other varibles.

- Here is how we can declare pointers.

```cpp
int *ptr_p;
```

> We can also decalre pointer in the following way. **NOTICE the position of <code>  *  </code> (astrisks)**:
>>
>> ```cpp
>>int* ptr_p; 
>>```
>> The position of the astrisk does not affect the pointer itsef, if declared individually.

- In the above statements, we've declared pointer <code>ptr_p</code> of the <code>int</code> type.

Pointers and variables can also be declared in the same statement, as follows:

```cpp
int *ptr_p, p;
```
- Here, we've declared pointer <code>ptr_p</code>, and a normal vriable <code>p</code>. In the same statement.

**All three decalration mentioned above are valid.**


****


## Initializing Pointer

The pointer can be initlialized as any other variable, i.e, using an assignment operarator (<code> = </code>).

*Before using the pointer in, for instance a cout statement it has to be initialized.*

1. But using literal is not an option 'cause you can never know what's in the particular address of the computer's memory. See the following example:

```cpp
// assigning value to the pointer.
int *ptr_p = 148324;
```
* * Here, we can never know what's stored in the address (148324).

 *Hence, the compiler will not allow it and prompt errors for segmentation fault.*

2. There is an exception, zero can be assigned to a pointer variable. *A pointer variable which has zero assigned to it is called a null pointer.*

```cpp
int *ptr_p = 0;
```
Using the integer <code>"0"</code> as a null pointer is sometimes confusing (may be confused with other varibles). so instead, it can be written as :

```cpp
int *ptr_p = nullptr;
```
OR

```cpp
int *ptr_p = NULL;
```

> **Points to remember when using null/nullptr/0.**
> * Value of <code>nullptr</code> cannot be modified, it act as a constant.
> * <code>nullptr</code> is only allowed to be assigned to the pointer. If assigned to any other variable the compiler will throw random errors.
> * Dereferencing the null pointer is strictly forbidden.
>> *Imagine null-pointer like a blank signposts, they exists with no purpose to the traveler.*


****


## Reference (<code>&</code>) and Dereference (<code>*</code>) Operator

### Reference Operator: 

The (<code>&</code>) sign is called a reference operator. Referece operator is used to get the "address of" the variable.

* E.g, Reference Operator

```cpp
int *ptr_p, x;
//assigning value to the variable
    x = 2;
// assigning address of varible x to the pointer ptr_p
    ptr_p = &x;
// printing the address of the variable x
cout <<"Address of the variable x is: "<< ptr_p << endl;
```
- Here, <code>ptr_p = &x;</code> : Store the address of the variable <code>x</code> in the pointer <code>ptr_p</code>.

**Output**

```
Address of the variable x is: 0x7ffec40cadcc
```

### Dereference Operator: 

The (<code>*</code>) sign is called Dereference Operator. It is placed in front of the pointer (see example). Dereference operator is used to get the "values pointed by" a pointer. OR It can be said that, it shows the "value at address" stored in the pointer.

* E.g, Dereference Operator

```cpp
int *ptr_p, x;
//assigning value to the variable
    x = 2;
// assigning address of varible x to the pointer ptr_p
    ptr_p = &x;
// printing the value at the address the pointer holds i.e, for variable x
cout <<"Value at the address " << ptr_p <<" is: " << *ptr_p << endl;
```
- Here, <code>cout << *ptr_p;</code> : Print the value pointed by the pointer <code>ptr_p</code> ( It'll print the contents of the variable <code>x</code> i.e, 2 )

**Output**

```
Value at the address 0x7ffec40cadcc is: 2
```

> **NOTE: Remember**
>> The (<code>*</code>) sign at the declaration of the pointer does not mean "value pointed by" or "value at address". It just means that it's just a pointer.

> It should not be confused with dereference operator. **They are two different things, represented by the same sign.**

**Example**

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 5;

    // declare pointer variable
    int *ptr_p;

    // store address of x
    ptr_p = &x;

    // print value of x
    cout << "x = " << x << endl;

    // print address of x
    cout << "Address of x (&x) = " << &x << endl
         << endl;

    // print pointer ptr_p
    cout << "ptr_p = " << ptr_p << endl;

    // print the value at the address ptr_p points to
    cout << "value at the address pointed to by ptr_p (*ptr_r) = " << *ptr_p << endl;
    
    return 0;
}
```

**Output**

```
x = 5
Address of x (&x) = 0x7ffff92f8a58

ptr_p = 0x7ffff92f8a58
Content of the address pointed to by ptr_p (*ptr_r) = 5
```

> **In short**: 
>>* (<code>*</code>) is the reference operator, and can be read as "address of".
>>* (<code>&</code>) is the dereference operator, and can be read as "value at address" or "value pointed by".
