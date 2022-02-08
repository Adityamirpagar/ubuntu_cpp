# Pointer

**Pointers are used to store information about the location (address) of any other variable.** *

> *Pointers are used to store address, rather than values*
> >Imagine, **Pointers** like a **signposts**, They dont say about the place itself, but they do show (point) the direction and how to reach it.

The important difference between the values and address of a variable is that : -

* The value of the variable is, what the variable stores.
* And, the address of the variable is the information about, where this variable is palced in computer's memory.


****


## Declaration of Pointer

To declare a pointer an astrisk <code>( * )</code> is put in front of the name. And use prefix <code>ptr_ </code> (ptr underscore) to not get confused, with other varibles.

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

****

## Ponter vs Vectors : Similarities and Differences

Pointer and vectors have a lot in common, such as a vectors method named <code>data()</code> points to the address of the first element in the array.

Example:

```cpp
    vector<int> arr{5,4,3,2,1};

    int * ptr = arr.data();
```

- In the above code the pointer <code>ptr</code> holds the address pointed by the <code>arr.data</code> i.e, address for the first element in the array.

The same effect can be achived by applying <code>&</code>(reference) operator to the <code>arr[0]</code>

```cpp
int *ptr = &arr[0];
```
**Example: The following code will tell if both the pointers are equal or not**

```cpp
// Vector vs Pointers : Similarities and Differences
#include<iostream>
#include<vector>

using namespace std;

int main() {

// vector
    vector<int> arr{5,4,3,2,1};

    int * ptr1 = arr.data();
    int *ptr2 = &arr[0];

// Print true if pointer ptr1 and ptr2 are equal, else print false
    cout << boolalpha << (ptr1 == ptr2) << endl;

return 0;
}
```
**Output**
```
true
```

> Here we've assigned the address of first element in vector via two methods :
>> 1. Using <code>arr.data()</code> (vector method <code>data()</code>)
>> 2. Using <code>&arr[0]</code> (reference operator (<code>&</code>))

**Note : The position of the <code>arr.data()</code> can be changed using (addition) <code>+</code>, operator. E.g,**

```cpp
    vector<int> arr{5,4,3,2,1};

    int * ptr = arr.data() + 2; // using vector method

    cout << *ptr << endl; // print the elemnt held at the position.
```

- The above code is equivalent to :

```cpp
    int * ptr = &arr[2]; //using reference operator
```

OUTPUT :

```
    3
```

****

## The Arithmetic Operation for Pointer 

The pointer is significantly different from the integers arithmetic as it is relatively reduced and allows the following operation only: 

 **operations**

> **Addition** : 
>* Adding an intiger value to a pointer, giving a pointer (ptr + int -> ptr).

> **Substraction** : 
>* Substracting an intger value from the pointer, giving a pointer (ptr - int -> ptr).
> * Substracting a pointer from a pointer, giving an integer(ptr - ptr -> int) 

> **Comparision**: 
>* Comparing the two pointers for equality or inequality, this gives a value type <code>int</code> (ptr == ptr -> int; ptr != ptr -> int).


**Note: apart form this any other opertaion are forbidden or meaningless**

**Example of operations in pointers**
```cpp
#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector <int> arr{1,2,3};

    int *ptr1 = arr.data(); //ptr1 is at arr[0]
    int *ptr2;

// both the pointers are now at the same position
ptr2 = ptr1; // ptr2 is also now at arr[0]

// addition: ptr2 is shifted by 1 place right
ptr2 = ptr2 + 1; // ptr2 is now at arr[1]

// incrementation: ptr2 is again shifted by 1 place right
ptr2++; //ptr2 is now at arr[2]

// substraction: ptr2 is shifted 1 place to the left
ptr2 = ptr2 - 1; // ptr2 is now at arr[1]


// addition: ptr1 is shifted 1 palce to the right.
ptr1 = ptr1 + 2; // ptr1 is now at arr[2]

cout << "Final value of the ptr1 is: " << *ptr1<< endl; // final position of the pointer ptr1 is arr[2]

cout << "Final value of the ptr2 is: " << *ptr2<< endl; // final position of the pointer ptr2 is arr[1]

// Comparision: ptr1 is compared with ptr, using tenory operator

string result = (ptr1 == ptr2) ? "is equal to" : "is not equal to";

cout << "ptr1 "  << result << " ptr2" << endl;  

return 0;
}
```

****

**Conclusion**

*We reach the conclusion that pointers can behave like vectors sometime and vice versa.*

Let's assume that the ptr1 pointer points to the second elemnet of the <code>arrray</code> vector. We want to dereference it and fetch the value residing at the address the pointer currently contains. We can do it in the following way:

```cpp
int  value = *ptr1;
```

Now, if we want to dereference the value that is located one element after the current pointer indication. This can be done in following way:

```cpp
value = *(ptr1 + 1);
```

- This will print the next element in the array.

This happens beacause the, C++ language assumes that the operation described as:

```cpp
*(pointer + offset)
```

is a synonym of

```cpp
pointer [offset]
```

This means that the previous assigment can be written as:

```
value = ptr1[1];
```
