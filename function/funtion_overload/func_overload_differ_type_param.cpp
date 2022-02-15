// function with different type of parameters
#include <iostream>

using namespace std;

// function with 3 int type parameters
int func(int a, int b, int c)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}

// function with 3 double type parameter
int func(double a, double b, double c)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}

int main()
{
    int i = 5, j = 10, h = 15;

    func(i, j, h); // function invocation

    return 0;
}