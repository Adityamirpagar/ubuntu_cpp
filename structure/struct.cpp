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

    Person p1;

    cout <<"Enter the name: ";
    cin.get(p1.name, 50);

    cout <<"Enter the age: ";
    cin >> p1.age;

    cout <<"Enter the salary: ";
    cin >> p1.salary;

// Displaying information
cout <<"\nDisplaying information. " ;

cout << "\n\nName: " << p1.name << endl;
cout <<"Age: " << p1.age << endl;
cout << "Salary: " << p1.salary << endl;

return 0; 
}