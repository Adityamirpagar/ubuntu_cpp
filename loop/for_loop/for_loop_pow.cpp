// This program gives exponent for 2
#include<iostream>
#include<vector>

using namespace std;

int main() {

int n = 0;
int pow = 1;
cout << "Enter the exponent: ";cin >> n;

for(int i =0; i < n; i++){
    pow *= 2;
    cout << "2 raise to the power of " << i+1 << " is " << pow << endl;
    
}

return 0;
}
