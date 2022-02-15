// function with different number of parameters
#include<iostream>

using namespace std;

// funtion with 2 parameters
int func(int a, int b){
    cout <<"a = " << a << endl;
    cout <<"b = " << b << endl;
return 0;
}

// function with 3 parameters
int func (int a, int b, int c){
    cout <<"a = " << a << endl;
    cout <<"b = " << b << endl;
    cout <<"c = " << c << endl;
return 0;
}

// function with 4 parameters
int func (int a, int b, int c, int d){
    cout <<"a = " << a << endl;
    cout <<"b = " << b << endl;
    cout <<"c = " << c << endl;
    cout <<"d = " << d << endl;
return 0;
}

int main(){
    
    int i = 5, j = 10, k = 15, l = 20; // integer values

    func(i,j,k); // function invocation

return 0;
}