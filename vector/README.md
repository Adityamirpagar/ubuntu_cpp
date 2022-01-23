# Vector

Vectors are used to store elements of similar data type. Unlike arrays, the size of a vector can grow dynamically. I.e., we can change the size of the vector during the execution of a program as per our requirements.

Vectors are part of CPP standard template library (STL), so we’ll have to include the header file in our program 

```cpp
#include <vector>
```

## Vector declaration

Here is how we can declare a vector

```cpp
vector <type> var_name;
```

- The type parameter **< type >** specifies the data type of the vector. It can be of any type such as, char, string, bool, etc..

- var_name is the name of the variable.

Ex: 

```cpp
vector <int> num;
```

Here, **< int >** specifies the data type i.e., integer. And num is the name of the variable.

***Note: the size of the vector is not specified within the declaration. This is because vector size can dynamically grow, so its not necessary to define it.***

---

## Vector initialization

1. **Method 1**

```cpp
//initializer list
vector <int> num1 = {1,2,3,4,5};
```

```cpp
//Uniform initialization
vector <int> num2 {1,2,3,4,5};
```

- here we are providing values directly to the vector.
- num1 and num2 are both now initialized with values 1,2,3,4,5.

2. **Method 2** 

```cpp
vector <int> num3(5, 12);
```

- here, 5 is the size of the vector and 12 is the value.

***The code create int vector of size 5, and initializes with the value of 12.***

- The above code is equivalent to :-

	```cpp
	vector <int> num3 = {12,12,12,12,12};
	```
                OR

	```cpp
	vector <int> num3 {12,12,12,12,12};
	```

### Example vector initialization

```cpp
#include<iostream>
#include<vector>

using namespace std;

int main(){

/* method 1 */

// initializer list
    vector<int> num1 = {1,2,3,4,5};


/* method 2 */
    
//uniform initialization
    vector <int> num2 {6,7,8,9,10};


/* method 3 */
    vector <int> num3(5, 12);

/*
auto can be used, 'cause ranged loop iterates over values rather than indces
value of the vector is assigned to the ranged loop variable.
*/

// ranged loop 
cout << "\n\nvector 1: ";
for(int i : num1){
    cout << i << " ";
}

//ranged loop 
cout << "\n\nVector 2: ";
for(int i : num2){
    cout << i << " ";
}

//ranged loop
cout << "\n\nVector 3: ";
for(auto i : num3){
    cout << i << " ";
}

return 0;
}
```

**output**

	vector 1: 1 2 3 4 5 
	vector 2: 6 7 8 9 10
	vector 3: 12 12 12 12 12 

- Here we've declared three different vectors, using three different initialization methods, and displayed there elements.

****
****

## Basic Vector Operations

* Add elements
* Access elements
* Change elements
* Remove elements

**1. Add Elements to a Vector**

To add a single element in the vector, we use <code> push_back()</code> function. It inserts the element into the end of the vector

- **Example**

```cpp
// adding element to the vector

#include <iostream>
#include <vector>

using  namespace std;

int main() {

vector<int> num {1,2,3,4,5};

//Initial vector
cout << "Inital vector: ";
for(int i : num){
    cout << i << " ";
}

num.push_back(6); // adding 6 at the end.
num.push_back(7); // adding 7 at the end.

// updated vector

cout << "\n\nUpdated vector: ";
for(int i : num){
    cout << i << " ";
}

return 0;
}
```
**Output**

```
Initial vector: 1 2 3 4 5

Updated vector: 1 2 3 4 5 6 7
```

- We have initialized an <code>int</code> vector <code>num</code> with the elements <code>1,2,3,4,5</code>. ***Notice the statement***

```cpp
    num.pushback(6);
    num.pushback(7);
```

- Here, <code>push_back()</code> function adds the elements <code>6</code> and <code>7</code> to the vector.

- We can also use <code>insert()</code> function to add the elements to a vector.

***

**2. Access element from Vector**

In CPP index number are used to access elements from a vector. Here, we use <code>at()</code> function to access the element form a specified index.

- **Example**

```cpp
// access element from a vector.

#include <iostream>
#include <vector>

using  namespace std;

int main(){

    vector<string> fruits {"apple", "orange", "banana", "carrot", "tommato"};

//accessing the elements using at(), function

    cout << "Element at index 1 : " << fruits.at(1) << endl;
    cout << "Element at index 3 : " << fruits.at(3) << endl;
    cout << "Element at index 4 : " << fruits.at(4) << endl;

/*
we can also use "square brackets []" as in array, to access the element.
*/

    cout << "\n\nElement at index 0: " << fruits[0] << endl;
    cout << "Element at index 2: " << fruits[2] << endl;

return 0;
}
```
**Output**
 ```
 Element at index 1: orange
 Element at index 3: carrot
 Element at index 4: tommato
 ```

- we can also use square bracket "[]" as in array, to access the elements at a specified location

```cpp
#include<iostream>
#include <vector>

using namesapce std;

int main(){

    vector<string> fruits {"apple", "orange", "banana", "carrot", "tommato"};

//accessing elements using square brackets "[]".

cout << "\n\nElement at index 0: " << fruits[0] << endl;
cout << "Element at index 2: " << fruits[2] << endl;

return 0;
}
```
**Output**

```
 Element at index 0: apple
 Element at index 2: banana
```
***

**3. Changing elements in a vector**

Elements can be changed in the vector using the same <code>at()</code> function. Just place the index to be changed in the arguments.

**Example**

```cpp
// changing element in a vector

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<string> fruits {"apple", "orange", "banana", "carrot", "tommato"};

// Printing initial vector
    cout << "Intial vector: " ;
    for(auto i : fruits){
        cout << i << ", ";
    }

// changing the elements
    fruits.at(1) = "avacado";
    fruits.at(4) = "mango";

// Printing updated vector
    cout << "\n\nUpdated vector: ";
    for(auto i : fruits){
        cout << i << ", ";
    }
    cout << endl;

return 0;
}
```
**Output**

```
Intial vector: apple, orange, banana, carrot, tommato,

Updated vector: apple, avacado, banana, carrot, mango,
```

- In the above example, **Notice the statement**

```cpp
    fruits.at(1) = "avacado";
    fruits.at(4) = "mango";
```
- Here, we have assigned the new value to the index <code>1</code> and <code>4</code>.

- So, index <code>1 </code> i.e., <code>apple </code> is changed to <code>avacado</code>. 

- And, index <code>4 </code> i.e., <code>tommato </code> is changed to <code>mango</code>.

***

**4. Deleting or Removing element from a vector**

Element can be deleted from a vector using <code>pop_back()</code> function. 

**Example**

```cpp
// removing an element from the vector

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<string> fruits {"apple", "orange", "banana", "carrot", "tommato"};

// Printing initial vector
    cout << "Inital vector: ";
    for(auto i : fruits){
        cout << i << ", ";
    }

// Removing the element 
    fruits.pop_back(); // only removes last element

// Printing updates vector
    cout << "\n\nUpdates vector: ";
    for(auto i : fruits){
        cout << i << ", ";
    }
    cout << endl;


return 0;
}
```
**Output**

```
Inital vector: apple, orange, banana, carrot, tommato,

Updated vector: apple, orange, banana, carrot,
```
- Here we have removed the last element from the vector. **Notice the statement**

```cpp
    fruits.pop_back();
```

****
****

## Basic Functions in Vector

The vector header file provides different functions, that can be used to perform various operations, These are: 

* <code>size()</code> - returns the overall number of elements present in a vector.

* <code>capacity()</code> - checks the overall size of the vector.

* <code>front()</code> - Returns the first element of the vector.

* <code>back()</code> - Returns the end or last elelment of the vector.

* <code>clear()</code> - Removes all the elements from the vector.

* <code>empty()</code> - Returns <code>1</code> (true), if vector is empty.


**Example**

```cpp
// basic function of the vector

#include<iostream>
#include<vector>

using namespace std;

int main() {

vector<int> num{1,2,3,4,5,6,7,8,9};

// Initial vector
cout << "Initial vector: ";
for(auto i : num){
    cout << i << ", " ;
}

// Size
cout << "\n\nSize of the vector is: " << num.size();

// Capacity
cout << "\nCapacity of the vector is: " << num.capacity();

// Front
cout << "\nFirst element is: " << num.front();

// Back
cout << "\nLast element is: " << num.back();


// Empty
if(num.empty() == 1){
    cout << "\nVector is empty. ";
} else {
    cout << "\nVector is not empty. ";
}

// Clear
num.clear();
cout << "\n\nUsing clear(), function. ";
if(num.empty() == 1){
    cout << "\nVector is empty. ";
} else {
    cout << "\nVector is not empty. ";
}

// Updated vector
cout << "\n\nUpdated vector: ";
for(int i : num){
    cout << i << ", ";
}

cout << endl;

return 0;
}
```

**Output**

```
Initial vector: 1, 2, 3, 4, 5, 6, 7, 8, 9,

Size of the vector is: 9
Capacity of the vector is: 9
First element is: 1
Last element is: 9
Vector is not empty.

Using clear(), function.
Vector is empty.

Updated vector:
```

****
****

## Vector Iterator

Iterators are used to point to memory address of an element. They are somewhat like pointers.

**Syntax**

```cpp
vector<T>::iterator iterator_name;
```

- if we've 2 different vector <>int<> and <>float<>, Then we'll use 2 different iterators corrosponding to the data type of the vector.

```cpp
// Iterator for int.
vector<int>::iterator iter1;

// Iterator for float.
vector<float>::iterator iter2;
```

### Initializing the iterator

Iterators can be initialized using <code>begin()</code> and <code>end()</code> functions.

**1. <code>begin()</code> function.**

The <code>begin()</code> function return the first element of the vector, for example:

- **example**

```cpp
vector<int> num{1,2,3,4,5};

vector<int>::iterator iter;

// Initializing the iterator
iter = num.begin();
```

**2. <>end()<> function**

The <code>end()</code> function returns the *theorotical*, last element of the vector.

- **example**

```cpp
vector<int> num2 {6,7,8,9,10};

vector<int>::iterator iter2;

// Initializing the iterator
iter2 = num.end() - 1;
```
***NOTICE the " -1 " at the end of the initilization statement***

```cpp
iter2 = num.end() - 1;
```
- This is beacause the nature of the <>end<> function, it prints the theorotical value, that should not be accessed. To counter this we have to use <code> -1 </code>.

- This tells the <code>end()</code> functio to stop <code> 1 </code> postion before the theorotical value.

****

**CPP Vector Iterator example**

```cpp
// vector iterator

#include<iostream>
#include<vector>

using namespace std;

int main(){

// Vector initialization
    vector<int> num {1,2,3,4,5};

// Iterator declaration
    vector<int>::iterator iter;

// Initializing iterator with begin() function.
    iter = num.begin();
// Prints the first vector element
cout << "num[0] = "<< *iter << endl;


// Iterator points to the 4th elements.
iter = num.begin() + 3;
cout << "num[3] = " << *iter << endl;


// Initializing iterator with end(), function.
    iter = num.end() - 1;
// Iterator points to the last element.
cout << "num[4] = " << *iter << endl;


return 0;
}
```

**Output**

```
num[0] = 1
num[3] = 4
num[4] = 5
```

**Explanation**

- In the above code we have an <code>int</code> vector named <code>num</code>, that consists of 5 elements <code>{1,2,3,4,5}</code>.

```cpp
// vector initialization
    vector<int> num {1,2,3,4,5};
```

- we have decalred an iterator named <code>iter</code>.

```cpp
// Iterator decalration
    vector<int>::iterator iter;
```


- Now, we have initialized the iterator with first element usin <code>begin()</code> function.

```cpp
// Initializing the iterator with first element
    iter = num.begin();
```


- Then we printed the first element 

```cpp
// Printing the first element
    cout << "num[0] = " << *iter << endl;
```
```
num[0] = 1
```


- Similarly, we have printed the 4th element. By changing the value of <code>iter</code> to <code>num.begin() + 3</code>

```cpp
// Changing the iterator value.
    iter = num.begin() + 3;
// Iterator points to the 4th elements.
    cout << "num[3] = " << *iter << endl;
```
```
num[3] = 4
```

- Finally, we have printed the 5th element, using  <code>end()</code> function. 

```cpp
// Initializing iterator with end(), function.
    iter = num.end() - 1;
// Iterator points to the last element.
    cout << "num[4] = " << *iter << endl;
```
```
num[4] = 5
```

****

**Iterating through the vector**

Iterating through the vector using iterator, and for loop to initialize the iterator from the begining of the vector to the end of the vecot using <code>begin()</code> and <code>end()</code> function.

**example**

```cpp
// Iterating through the vector using for loop

#include<iostream>
#include <vector>

using namespace std;

int main() {

// vector initialization
    vector<int> num {1,2,3,4,5,6};

// iterator declaration
    vector<int>::iterator iter;

// looping through the vector
for(iter = num.begin(); iter != num.end(); ++iter){
    cout << *iter << ", ";
}

cout << endl;

return 0;
}
```

**Output**

```
1, 2, 3, 4, 5, 6,
```

****


