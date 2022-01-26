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