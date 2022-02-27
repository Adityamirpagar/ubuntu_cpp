# String

String is called a collection of characters in c language. There are two types of strings used in c++ programming.

1. C-string (C-style string)
2. String that are object of string class (`std::string`)

## 1. C-string (C-style string)

C-style strings is a collection of characters stored in the form of arrays. This method is used to store strings in C programming, Hence it is called C-style string. This method of defining strings is also valid in C++ programming.

**Defining C-style string**

```cpp
char str[] = {"H","e","l","l","o"," ","W","o","r","l","d","!"};
```
- Here, the array `str` is a string and holds 12 characters.

> There is a `\0` Null chracter, that is added to the end of the string automatically.


### Taking input as a string

*Program to display the user entered string*

```cpp
  char str [50];

    cout <<"Enter the string: ";
    cin >> str;
    cout << "You have entered: " << str << endl;

    
    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: " << str << endl;
```

**Output**

```
Enter the string: hello 
You have entered: hello

Enter another string: hello world
You entered: hello
```
- As it can be seen, that the second input ` hello world ` gives output of only the first word. This is 'cause the ` >> ` extraction operator at  works as ` scanf() ` in C and considers whitespaces as a terminating character.

This can be overcome using ` cin.get() ` function, it takes two arguments: the first one is the name (identifier) of the string and second argument is the maximum size of the array.


```cpp
  char str [50];

    cout <<"Enter the string: ";
    cin.get(str, 50);
    cout << "You have entered: " << str << endl;
```

**Output**

```cpp
Enter the string: hello world
You have entered: hello world
```

- Using ` cin.get() ` function we can store the the whitespaces as a charater in the array.

> ` cin.get() ` is only used when working with array, i.e, the collection of characters.

****

## 2. String object (` std::string `)

A string in the c++ language is a **set of characters** surrounded by double quotes (` " " `).

**Why we use `string` instead of `char`?**

The `char` variables are very useful when we want to process single characters, but they are extreamly difficult when we have to deal with data containing all kinds of names e.g, surnames, city names, etc. Processing that kind data as a type `char`, it's very tedious and slow. It will be easy to treat all the characters as a whole  stored, assigned and processed at the same time.

**Note: The string is not the part of the core language, the way that `int`, `char` etc are,  i.e, if one wants to use string in the code, we have to put the `#include<stirng>` directive at the top of our program. (The lack of directive will cause a compilation error)**


*Note A string is an object in C++ language, it has various member* 


### Initializing a string

A string can be initialized in a way that is identical to the one used for the other regular types i.e, by usig the assignment operator (=) follwed by a string literal. 

*Program to Initialize a string*

```cpp
string myName = "John";
```
- Here, the newly created varible named `myName` will be assigned with a string consisting of charaters `John`. 

**Note: The string assigned to the vaiable `myName` is in between quotes (`" "`), As in the case of `char` the character assigned is in between apostrophes.**

Example: Initializing `char`

```cpp
char c = '7';
```

### Taking input in strings

Taking input as a string is not as same as other types. 

**Code**
```cpp
string a,b;

cout << "Enter the string: "<< endl;
cin >> a; 
cout <<"You entered:"  << a << endl;

cout << "Enter the string: "<< endl;
cout <<"You entered:"  << b << endl;
```

**Output**
```
Enter the string: hello
You entered: hello
Enter another the string: hello world
You entered: hello
```

- *Here, the second otput only contains the first word (i.e, hello), 'cause `cin` treats whitespaces as the end of the string. So when we include whitespaces in our input, the `cin` stream is convinced that we've entered the whitespace to mark the end of the string, and only takes the string before the whitespace. It's not an error.*

To overcome this issue, we have to take whole line for input, and treat whitespaces as any other characters. To do this we use a function called `getline()` function.

This function reads all the charaters entered as-is and does not favour any character (expect the escape charaters), as a result all the charaters entered before the special characters will be input as one string.

**Using `getline()` function**

```cpp

string a;
cout <<"Enter the string: ";
getline(cin, a);
cout << "You entered: " << a << endl;
```

**Output**
```
Enter the string: hello world
You entered: hello world
```

****

## String Operators

Like other types the string also has its own operators. 


### 1. **Concatination**: 

The most common one is a `concatinatiion operator`. It is denoted by `+` (plus symbol).

But unlike in arithmetic where this operator is used as addition of values. In string it `concatinates` (i.e, attach them together resultig in the formation of a new string)


*Example of concatination of string*
```cpp
string str1 = "John";
string str2 = "Doe";

string str3 = str1 + str3;

cout << str3 <<endl;
```

**Output**
```
JohnDoe
```

>*Note: the concatination `+` operator used in string is not commutative (i,e ` a + b != b + a `). Unlike in arithmetic addition, where it is commutative (i.e, ` a + b = b + a `).*

The concatination operator comes with some limitations:

- The concatination between a literals cannot occur. It will genrate error.

```cpp
string s ;

s = "A" + "B";

s = s + "C";

s = "B" + s;

cout << s <<endl;
```
- Here, `s = "A" + "B";` will generate error, 'cause it is trying to concatinate two literals.

> * It can concatinate, a variable with literal and, A literal with any variable.
> * It can also concatinate a variable with another variable. 
> * But, concatinating literal with another literal will generate errors.

```cpp
string s ;

// s = "A" + "B"; //commenting the illegal expression

s = s + "C";

s = "B" + s;

cout << s <<endl;
```
**Output**
```
BC
```


### 2. **Comparision**
As in other types, the string can also be compared with each other. It is used when we want to check the two variable of type string containd identical strings (characters).

Assume, that we want to create a simple login program that checks the password i.e, compare it with the password stored in the system  in a varible named `secret`. If both password and `seceret` are equal, then access granted. If not than password incorrect.

```cpp
string secret = "thispasswordissupersecure";
string password;

getline(cin,password);

if(secret == password)
    cout << "Access Granted "<< endl;
else
    cout << "Password incorrect "<<endl;
```

**Input**

    thispasswordissupersecure

**Output**

    Access Granted

- The program illustrates the process of entering the password and checking if it's valid.


**Other comparision operators**

Well, the comparision operators comes in a variety:

* Or, if one string is ` equal ` to other string. (` != `).

* Or, if one string is ` not equal ` to other string. (` != `).

* You can check, if one string is ` greater than ` the other string. (` > `).

* and, if one string is ` less than ` the other string. (`<`).

```cpp
string str1, str2;

  cout << "Enter 2 lines of text:" << endl;

  getline(cin, str1);
  getline(cin, str2);

    cout << "You've entered:'" << endl;

    if (str1 == str2)

        cout << str1 << " = " << str2 << endl;

    else if (str1 > str2)

        cout << str1 << " > " << str2 << endl;

    else

        cout << str1 << " < " << str2 << endl;
```

- This program will compare two strings with each other to check if they are ` equal (==) ` to each other or, one string is ` less than (<) ` other string, or one string is ` greater than (>)` other string.

**input**
```
hello world
hello worl
```

**Output**
```
Enter 2 lines of text:
hello world
hello worl
You've entered:'
hello world > hello worl
```
****

### **short hand operator**

Like in other types the string operator can also use short hand operators:

1. concatination shorthand operator (` += `)
2. less than and equal to shorthand operator (` <= `)
3. Greater than equal to shorthand operator (` >= `)


**1. Shorthand Concatination operator (`+=`)**

Like in other types where we use shorthand operators, to short the arithmetic expression. Same can be used in `string` (`+=`). 

**Note:: `s += " not to be"` is equivalent to `s = s + " not to be"`**

```cpp
string s = "to be or";

s += " not to be"; // `s += " not to be"` is equivalent to `s = s + " not to be"`

cout << s << endl;
```

**Output**

```
to be or not to be.
```

**2. Shorthand comparision operators for strings**

Shorthand comparision operator for strings are:

* You can check, if one string is ` greater than or equal to ` the other string. (` >=  `).

* You can check, if one string is ` less than or equal to ` the other string. (` <= `).

* Or, if one string is ` not equal ` to other string. (` != `).

****

## Object oriented approach (std::string)

As we know that the `string` is not the part of the core of the C++ language, rather it is a object in the class of string. 

And there are various members in the string class that allows us to do operations on strings similar to the traditional way, This type of approach is known as object-oriented style. It is much faster than the traditional approach.

*NOTE:: The data is the object's **property** or **member variable**, and the functios are the object's **method** or **member functions**.*

**1. Concatination in a object-oriented way (`std::append()`)**

The string class has method (fucntion) named ` apppend() `, that does the similar operation as the traditional  concatination operator (` + `).

```cpp
    string str1 = "John";
    string str2 = "Doe";

    string str3 = str1.append(str2); // concatinated str1 with str2 and assigned to str3 

    cout <<"Concatinated: " << str3 << endl; 
}
```
- Here at ` str3 = str1.append(str2) `, it says: that activate the `append()` method (function) for the ` str1 ` object in order to concatinate, the string stored within `str1` with the string strored within `str2`. And assign the resulting string to `str3`.

**Output**
```
Concatinated: JohnDoe
```

**2. Comparision in object-orieted way (`std::compare()`)**

A member funciton (method) in string class named compare does the same operation as the traditional comparision operator (` == `).

```cpp
string secret = "thispasswordissupersecure";
    string password;

    getline(cin,password);

    if(secret.compare(password) == 0)
        cout << "Access Granted "<< endl;
    else
        cout << "Password incorrect "<<endl; 
```
- Here, argument in the `if` statement ` secret.compare(password) ` says: invoke the `compare()` method for the object `secret` in order to compare the string stored within `secret` with the string stored within `password`.

**Output**
```
Enter the password: thispasswordissupersecure
Access Granted
```

**NOTE: the compare method return 0, if the strings compared are equal.**


**The main difference between the C-style string and std::string class is that, in case of the array the size has to be allocated at the time of declaration, i,e. all memory once allocated is fixed and cannot be altered at the runtime. Whereas, for string there is no need to specify the size and to allocate fixed memory at the time of declaration.**

### Some useful string functions.

We've seen comparision `compare()` and concatination `append()`, there are other many useful functions (methods) in `string`:

**1. Substrings (`std::substr()`)**

A part of a string is called a `substring`. Suppose if we want to create a new string consisting of characters takesn from another string's substring, we can use a member function called `substr()`. It's informal prototype looks like this:

```
newstr = oldstr.substr(substring_start_position, length_of_substring);
```

The substring of any string takes two arguments:

1. a place where the substring begins i.e, (`substring_start_position` parameter);
2. its, string length i.e, (`length_of_substring` parameter)

**Example: substring**

```
   string str1 = "ABCDEF";

   string str2 = str1.substr(1,1); // will return B
   string str3 = str1.substr(1,4); // will return BCDE

// Print the concatination of str2 and str3
   cout << str2.append(str3) << endl;
```

**Output**

    BBCDE

- Here, the `string str2 = str1.substr(1,1)` describe a substring of `str1` starting at index `1` and the length of the new substring is `1`. So, it will print the character at the index `1` and size will be `1`. i.e, `B`.
- Similarly, the `string str3 = str1.substr(1,4)` describes that a substring of `str1` starting at index `1` and the length of the new substring is `4`. So, it will print the character at the index `1` and the size will be `4`. i.e, (BCDE).

- At last the `cout` statement has the concatinating function `append` that attaches both `str2` and `str3` and print the results on the screen.


> Important points to remember:
> * The index of the first character is `0` (not `1`).
> * Parameters has default values, that is if there is no value passed in the function. It will just copy the whole string. Hence, `str.substr()` will just copy the whole string.
> * if only one parameter is passed then the value that is passed will be treated as starting index number and the length will be equal to the length of the remaining string after the index. Hence, `str.substr(2)` will print `CDEF`.


**2. The length of a string (`std::length() / std::size()`)**

Every string has a length. Even an empty string (with no characters) has a length of zero (0). So, to know how long is a string will be helpful. This information is provided by two twin member functions. There names are different but their behaviours are identical.

They are `size()` and `length()`. Both `string::size` and `string::length` are synonyms and **return a value equal to the number of all the characters currently stored within a string**.

```cpp
string str = "ABCDEF";

cout << str.size() << endl; // size of string object using size() method
cout << str.length() << endl;// size of string object using lenght() method
```

**Output**

    6
    6

**3. Finding string inside string (`std::find()`)**

Sometimes we've not only to extract a substring from a perticular string, but also to find a substring within another string. Taking into account the possibility that it may fail (not all haystacks contain needles).

`std::sting` object has a member named `find()` it can help us to find a substring or a character inside a string. The template of `find()` function is:

*Original template*
```
size_t find (const string& str, size_t pos = 0);
size_t find (const char* s, size_t pos = 0);
```

*Function paramters:*
* str : The substring to be searched.
* s : The character to be searched.
* pos : The initial position from where the string search is to begin.

*Funciton return*
* The result returned by the function points to the location within the string where the searched string begins or where the searched character is located.
* If the search fails, the function then returns a special value denoted as `string::npos`. (`string::pos` is static member with value as the highest possible for the size_t data structure).

*Easy to remember template*

```
int found_substr = any_substr.find(find_string, start_here);
int found_char = any_string.find(find_char, start_here);
```
*NOTE: Both `start_here` parameter defaults to `0`. So, if ommited the stirng search will begin from index `0` or **begining***


```cpp
// declaring string   
string greeting = "My name is Bond, James Bond";

// finding substring inside the string
string we_need_him = "James";
if (greeting.find(we_need_him) != string::npos)
   cout << "We found him." << endl;
else
   cout << "He's not here." << endl;


// finding character inside the string
int comma = greeting.find(',');
if(comma != string::npos)
   cout << "He also has a comma." << endl;
```

**Output**

    We found him.
    He also has a comma.


**4. Capacity of string (`std::capacity()`)**

We know that we can retrive the information about length of the string with `length()` and `size()` function. But it only tells us that how many characters are in the string, and says nothing about the memory occupied by the buffers allocated to that string, the size of the buffer has to be greater than the string itself.

Every time we extend the string e.g, concatinating another string to it, the new content is placed in the buffers. If these buffers are large enough, then extending the string doesn't require the buffers to extend.

`std::string` object has a member function named `capacity()`, This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.

**Program to print the length and size of the buffer**
```
string str = "Hello world!";

cout << str.length() << endl; // characters in the string
cout << str.capacity() << endl; .// total capacity of the string buffer
```

**Output**

    12
    15

**5. Removing all the chracters of a string (`std::clear()`)**

Removing all the chracter from a string is equivalent to assigning an empty string to string, but it could be little bit faster. `std::string` has a member function named `clear()`. It requires no parameters.

```cpp
string str = "Hello world!";

cout << "The length of the string: " << str.length() << endl;
cout << "The capacity of the string (buffer): " << str.capacity() << endl;

str.clear(); // clearing the string 

cout <<"\nThe length of the new string: " << str.length() << endl; 
cout <<"The capacity of the new string (capacity): " << str.capacity() << endl;
```

**Output**

```
The length of the string: 12
The capacity of the string (buffer): 15

The length of the new string: 0
The capacity of the new string (capacity): 15
```

**6. Resize the string (`std::resize()`)**

Changing the size of the string is carried out by the member function named `resize()`. It take one parameter of type `int`, specifying the desired new size of the string.

If the parameter is smaller than the current string size, the string will be truncated, And of course if the parameter size is larger than the string size, the string will be expanded. 

```cpp
string str = "Hello world";

cout << str;

cout << "\nThe length of the string: " << str.length() << endl;
cout << "The capacity of the string (buffer): " << str.capacity() << endl;

str.resize(5); // resizing the string 

cout << "\n" << str;

cout <<"\nThe length of the new string: " << str.length() << endl; 
cout <<"The capacity of the new string (capacity): " << str.capacity() << endl;
```

**Output**

```
Hello world
The length of the string: 11
The capacity of the string (buffer): 15

Hello
The length of the new string: 5
The capacity of the new string (capacity): 15
```

**7. Checking if the string is empty or not (`std::empty()`)**

To check if the particular string is empty (i.e, it contains no character), we use a member function named `empty()`. It requires no parameters, and it returns the value type of `bool`. (i.e, return true if the string is empty).

```cpp
string str = "Hello world";


cout <<"string = " << str << endl;
cout << "Is empty = " << (str.empty() ? "Yes" : "No") << endl;

cout << "\nUsing the std::clear() member function" << endl;
str.clear(); // clearing the string

cout << "\nstring = " << str << endl;
cout << "Is empty " << (str.empty() ? "Yes" : "No") << endl;
```

**Output**

```
string = Hello world
Is empty = No

Using the std::clear() member function

string = 
Is empty Yes
```

**8. Erasing a substring from string (`std::erase()`)**

We can remove a part of a string, making it shorter than before. For this we've a member funciton named `erase()`,it returns the modified string as result and, it takes two parameters:

1. The index of character to be erased.
2. The length after the index to be erased.

*NOTE: The first parameter defaults to zero, and the second parameter defaults to the size() of the string. Hece, incation like this `str.erase()` will remove all the characters and leave the string empty.*

```cpp
  string where_are_we = "I've got a feeling we're not in Kansas anymore";

  where_are_we.erase(38, 8).erase(25, 4);
  cout << where_are_we << endl;
```

**Output**

    I've got a feeling we're in Kansas

**Note: This kind of invocation cannot be reversed i.e, `where_are_we.erase(25, 4).erase(38, 8);`, Doing this will change the index of the characters in the string, resulting in totally different string, (`I've got a feeling we're in Kansas any`) .**


**9. Exchanging the contents of two strings (`std::swap()`)**

To swap the contents of one string(`str1`) with the contents of another string (`str2`), we need an addition variable (`str`) that can hold the contents of any one string. Beacause, we cannot succesfully exchange the strings without using a third variable.

Suppose, if we want to replace a string (drink) stored in `glass_1` and `glass_2`, we need a third variable (`glass`) to do this.

```
glass = glass_1;
glass_1 = glass_2;
glass_2 = glass;
```
- This method of physically exchanging the character is too cumbersome, the `std::string` object has a member function named `swap()`. Which is much faster and very effective in comparision with physical exchange.

```cpp
  string drink = "A martini";
  string needs = "Shaken, not stirred";

  cout << drink << ". " << needs << "." << endl;
  drink.swap(needs);
  cout << drink << ". " << needs << "." << endl;
```

**Output**

    A martini. Shaken, not stirred.
    Shaken, not stirred. A martini.


There are also many more member functions in `std::string` object, that helps to make code efficient.

