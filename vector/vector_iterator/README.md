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
