// this program checks whether the student is passed or failed, using tenery operator
#include <iostream>

using namespace std;

int main(){

    int marks;
    
    // taking input from the user
    cout << "Enter your marks: "; 
    cin >> marks;  // enter the marks

    //tenery operator checks if marks is greater than 40
    string result = (marks >= 40) ? "passed" : "failed";

    cout << "You " << result << " the exam.";

return 0;
}