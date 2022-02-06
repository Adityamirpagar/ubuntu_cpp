# This is a test.


# **Vector in CPP**

Each time we create a variable in cpp, it can hold only one value at a time. That are scalar.  

But cpp provides us a function that can hold multiple value in a single variable, this is known as vector/array.

"Vector is the collection of elements, but each element is scalar."   
OR

"Vector is a collection of scalar elements"

****

## Syntax

```cpp
#include <vector>
/*
vector<data_type> var_name(size);
*/
vector<int> number(5);
```
* vector is not part of the iostream header file, we'll have to inlude the <vetor> as a header file.  
* The data has been declared in between digraph '< >'.  
* Variable name is after that, in this case it's *number*.  
* The size of the vector is palce in between parathesis *'()'*, in this case its *5*.  

****

<!--- 

[//]: *Vectors can aslo be written as :-*

**Syntax**
````cpp
//data_type var_name[size];
int number[5];
````

* The above representaion is commonly used.

[//]: dfdf 

--->

****
****

## Assignment

Each element in the vector can be assigned value's, using their position. The vector start's from the position 0. So, how to assign the value now that we've the position.

### ***indexing*** 

The value inside the brecket which is used to select each element of the vector is known as index.  
    
And the operation of selecting the element of the vector, is known as indexing.

- *assigning '111' to the #0.*

```cpp
int number[0] = 111;
```
- *assigning the value of #4 to the varible i.*

```cpp
int i = number[4];
````
****  

Suppose we want to assign the value of varible var_1 to var_2 and vice versa.

```cpp
int var_1 = 2 , var_2 = 4;
```

After the run, the value of the variables should be var_1 = 4 and var_2 = 2.

let's try simply assigning the value's ;

````cpp
var_1 = var_2; // var_1 = 4
var_2 = var_1; // var _2 = 4

cout << var_1 <<endl; // output = 4
cout << var_2 <<endl; // output = 4
````
*The above solution vill not work beacause after assigning the value of Var_2 to var_1 the value of va_1 will change.  
So the second line var_2 = var_1, will not change the value of var_2 to the previous value it holds that is 4*

To solve the problem we'll have to create a auxillary storage so that the value of var_1 can be saved.

let's try this method;'

````cpp
int aux_var;
aux_var = var_1;
var_1 = var_2;
var_2 = aux_var;

cout<< var_1 <<endl; // var_1 = 4
cout<< var_2 <<endl; // var_2 = 2
````

***But what if there are 100's of varible to change the value? Than this method will take too much effort and will be exhausting.***

lets assign each value 2021 to each elemnent of the vector.

so let's use a for loop for that pupose;'

````cpp
for(int i = 0; i < 100; i++){
    number[i] = 2021;  
}
````
* This loop will assign the value 2021 to each element of the vector form 0 to 99.

****
## 


****

### **Sum of all elements of a vector**

To calculte the sum of all element we''ll use a variabl that will store the sum. At each iteration.

````cpp
vector <int> number {0,1,2,3,4};
//int number[5] = {0,1,2,3,4};
int sum = 0;
for(int i = 0; i < 5; i++){
    sum += number[i]; // sum = sum + number[i]
    // output = 10
}
````
****

## **Swaping**  

**Suppose we have to swap each element of a vector with another element.**


````cpp
vector <int> number {2,1,5,8,6};
//int number[5] = {2,1,5,8,6};
int aux_var;

for(int i = 0; i < 5; i++){
    aux_var = number[0];
    number[0] = number[4-i];
    number[4-i] = aux_var;
}
//ouput {1,5,8,6,2}
````
****

## **Vector Initialization**

vector initialization is assignng the elements at the time of declaration using an initiator (=).  

**syntax**

````cpp
vector <int> number={0,1,2,3,4};
````
The initiators are the list of elemnts inside the curly braces.  

*The equals sign (=), can be omitted and it will then also present the same result.*

```cpp
vector <int> number {0,1,2,3,4};
```

### **Zero-length vector**

If a vector is created without any 'size' nor any 'initiators'.
This vectors might seem useless at a glance, But vectors can change their size dynamicaly. So in future there if no obsticle to limit such *zero-length vectors* to be more capacious.

### **Other Initialization*

The same vector can also be declared as:-

```cpp
int number[5] = {0,1,2,3,4};
```
- the above represantation is valid as well, just a different syntx.

- If the elements/initiatiors are not less than the size of the vector, then the compiler determines that the value should be 0 at that position e.g.,
```cpp
int number[5] = {0,1,2};
```
- If the elements/initiators are greater than the size of the vector than the compiler will throw error e.g.,

```cpp
int number[5] = {0,1,2,3,4,5,6};
```
- But empty bracket can be used to store indefinate elements/initiators e.g.,

```cpp
int number[] = {0,1,2,3,4,5,6 ...};
``` 
-  *The compiler will asume that the size of the vector is same, as the length of the elements/initiators.*

> Vectors can accept data type other than *int*, such as *bool*, *char*, and *float*.

- float
```cpp
vector <float> number(10);
// 10 float elements.
```
- char 
```cpp
vector <char> letters(20);
// 20 char elements
```
- bool
```cpp
vector <bool> votes(100);
// 100 bool elements
```
*Virtually any piece of data can be aggregated into a vector.*

**The above represantation can also be written as, without any loss in functionality**

```cpp
float number[10];
char words [20];
bool votes [100];
```
