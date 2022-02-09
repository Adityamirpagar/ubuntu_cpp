# Structure in CPP

**A structure is an aggregate of different elememts of different type. Each of these element is called a field(member). Each field(member) is identified by its unique name, not numbers(index).**

## Why do we use a strucure?

Imagine if you, were a developer of an online website, that provides educational courses. And your job is to create a database in which you can store and easily access all information of your students. *Information such as : name, time spent on the course, and the previous chapter. etc*

- You know that the website has no more than 100,000 students. Keeping this in mind we can create 

1. A vector with student_name declaration like this.

```cpp
// size of the vector is 100,000
vector<string> student_name(100'000);
```
Lets manipulate the array: 

- Suppose, you have your first ever registered student named bond(james bond :-)), this information can be stored in the array like this:

```cpp
// storing the name in the array
student_name[0] = "Bond";
```

2. Time spent on the website by Mr. Bond, can stored in floats, where numbers of hours will be represented as a decimal fraction:

```cpp
// creatin the vector for storing the time spent data
vector<float> student_time_spent(100'000);

// Time spent by mr. Bond 3 hrs and 30 min.
student_time_spent[0] = 3.5;
```

3. The recent chapter completed by Mr. Bond:

```cpp
// Creating a vector to store the previously read chapter
vector<int> student_recent_chapter(100'000);

// Storing the last chapter read by mr.Bond
student_recent_chapter[0] = 7;
```

**A main issue with the above declaration is the same object (<code>student</code>) is divided into three different variable. And it would be logical that they exist as a consolidated unit.**

- Having multiple array is cumbersome and error prone, and when additional student information (e.g, e-mail address) is to collected, a whole new array has to be declared.


* We know that a vector is an aggregate of elements. The elements are numbered (index no.), and are of the same type. 

    * But can we use an aggregate whose elements can be of different types?
    * And, could they be identified by their names rather than their numbers.

**Yes they can, and it can be done with, what we call a structure.**


 **A sturcture is an aggregate of different elememts of different type. Each of these element is called a field (member). Each field (member) is identified by its unique name, not numbers(index)**

****

 ## Structure declaration

- The declaration of the structure always starts with the keyword <code>struct</code>.

- It is accompanied by so-called *struct tag*, It is the name (identifier) of the structure. Usually it is written as first letter capital, so that it can be distinguished by other variable.

- Then the opening curly and closed curly bracket holds the fields (members) inside.

* Our structure has three fields:

    * The first is a <code>string</code> and is called <code>sudent_name</code>.
    * The second is a <code>float</code> and is called <code>time_spent</code>
    * The third is an (integer) <code>int</code> and is called <code>recent_chapter</code>.

* And, finally the declaration ends with a semicolon preceded by closing curly bracket.

E.g, 1:

 ```cpp
struct Student {
    string student_name;
    float time_spent; 
    int recent_chapter;
};
 ```

- Here is a structure <code>Student</code> is defined, which has 3 fields (members): <code>student_name</code>, <code>time_spent</code>, <code>recent_chapter</code>.

E.g, 2:

```cpp
struct Person {
    char name[50];
    int age;
    float salary;
};
```
- Here is a stucture <code>Person</code> is defined, which has 3 fields (members): <code>name</code>, <code>age</code>, <code>salary</code>


**NOTE: When a structure is created, no memory is allocated. The structure defination only specifies that, what property a stucture variable holds, when it is defined.**
****

## Defining a Strucuture variable

Once the structure has been declared, the variable can be defines as follows

**E.g., 1**

```cpp
// defining the structure variable
Student stdnt_1;
```
*   Here, a stucture variable <code>stdnt_1</code> is defined, which is of type structure <code>Student</code>


**E.g., 2**

```cpp
// Defining the structure variable
Person bill;
```
* Here, a structure variable <code>bill</code> is defined, which is of type structure <code>Person</code>.

When variable is defined, only then the required memory is allocated by the compiler.

****

## Accessing the fields (members) of a structure.

The members of structure variable is accessed using a slection (<code> . </code>) operator (dot).

As a vector has an indxing operator (<code> [] </code>) for selecting the elements in the vector. Structure also has a selection operator (<code> . </code>) (dot), for selecting the fields (members).

* The priority of the selection operator (dot) (<code> . </code>) is very high, equal to the priority of the indexing operator (<code> [] </code>).

* This is a binary operator, its left argument **must identify the structure**,  while the right argument must be the **name of the field (member)** known in this structure.

Suppose you want to access <code>student_name</code> of structure variable <code>Student</code>, and assign it <code>bond</code>.

```cpp
// accessing and assigning value to the structure variable.
stdnt_1.student_name = "bond";
// and
string x = stdnt_1.student_name;
```
Similaly, if you want to access the structure variable <code>age</code> of the type structure <code>Person</code>, and assign it <code>27</code>

```cpp
// accessing and assigning value to the structure variable.
bill.age = 27;
//and
int a = bill.age;
```
****
### Example: C++ Structure

```cpp
// structure in cpp
#include<iostream>

using namespace std;

// Declaring strucutre
struct Person {
    char name [50];
    int age;
    float salary; 
};

int main(){

// Calling the structure and creating new profile.
    Person p1;

// Gathering information
    cout <<"Enter the name: ";
    cin.get(p1.name, 50); // so that it can get the whole terminal line.

    cout <<"Enter the age: ";
    cin >> p1.age;

    cout <<"Enter the salary: ";
    cin >> p1.salary;

// Displaying information
cout <<"\nDisplaying information. " << endl;

cout << "\nName: " << p1.name << endl;
cout <<"Age: " << p1.age << endl;
cout << "Salary: " << p1.salary << endl;

return 0; 
}
```

****

## Structure inside a vector

Virtually any data could be used as a structure's field (member): Scaler, Vector, and any other arrays.

* **Structure can be aggregated inside a vector, so if we want to declare a vector consisting of <code>Student</code> or <code>Person</code> structure, we can do it in this way:**

```cpp
// Declaring a vector containg structure.
vector{Student} <stdnt>(100'000);
```

### Accessing the fields inside the vector structure.

To access the fields (members), we need two subsequent operations:

- In the first step, the (<code> [] </code>) operator indexes the vector in order to access the structure we need.

- In the second step, the selection operator (<code> . </code>) (dot) selects the desired member.

**E.g,**

```cpp
stdnt[3].student_name;
```
- This means that, we want to select <code>student_name</code> memeber of the 4th <code>stdnt</code> element.

**E.g,**

```cpp
// assining the values to the vector of sructure
stdnt[0].student_name = "Bond";
stdnt[0].time_spent = 3.5;
stdnt[0].recent_chapter = 7;
```

 **Example: Structure in the vector**
```cpp
// structure in vector.
#include<iostream>
#include<vector>

using namespace std;

// Declaring strucutre 
struct Student{
    string student_name;
    float time_spent;
    int recent_chapter; 
};

int main(){

// declaring that the size of the structure variable.
vector<Student> stdnt(100'000);


// Storing the information on the first student, i.e., [0] on the vector
cout <<"Enter the Students name: ";
getline(cin ,stdnt[0].student_name);

cout <<"Enter the Students time spent on the website: ";
cin >> stdnt[0].time_spent;

cout <<"Enter the recent chapter completed by the student: ";
cin >> stdnt[0].recent_chapter;


// Displaying information
cout << "\nDisplaying inforamtion. " << endl;
cout << "Name: " << stdnt[0].student_name << endl;
cout << "Time spent: " << stdnt[0].time_spent << endl;
cout << "Recent chapter: " << stdnt[0].recent_chapter << endl;

return 0;
}
```
## Initiator for structure.

Strucure can be initialized as **at the time of declaration**. The structure initaitor is enclosed in curly brackets and contains a **list of values assigned to the subsequent fields**, starting from the the first.

* The values listed in the initiator **must conform to the type** of the fields. 

* If the initiator contains fewer elements than the number of the structure field, it's presumed that the list is automatically extende with zeros.
    * it means that the empty structure initializer (<code>{}</code>) will zero all the structure fields.

**E.g,**

```cpp
// Initiator for the structure.
#include<iostream>
#include<vector>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

struct Student {
    char student_name [50];
    float time_spent;
    int recent_chapter;
};


int main(){

Date moon_landing = {1969, 7, 20};

Student he = {"bond", 3.5, 7};

Sudent she = {};

    cout << "Moon landing date: ";
    cout << moon_landing.year << "/"<< moon_landing.month << "/" << moon_landing.day << endl;

    cout << "\nHe Student ";
    cout <<"\n\nName: " <<he.student_name << endl;
    cout <<"Time spent: " << he.time_spent << endl;
    cout <<"Recent chapter: " << he.recent_chapter << endl;
    
    cout << "\nShe Student";
    cout <<"\n\nName: " << she.student_name << endl;
    cout <<"Time spent: " << she.time_spent << endl;
    cout << "Recent cahpter: " << she.recent_chapter << endl;

return 0;
}
```
