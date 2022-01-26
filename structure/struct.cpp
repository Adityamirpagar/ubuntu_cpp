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