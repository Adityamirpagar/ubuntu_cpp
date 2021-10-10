//This program take multiple input, until the escape code is hit (0) or (.). 
//This program will tell the number of the elements in odd and even.

#include <iostream>

using namespace std;

int main() {

	int even = 0, odd = 0;
	int num;

	cout << "Enter the number: "; cin >> num;

	while(num != 0) {

		if (num %2 == 1)
			odd++;
		else 
			even++;

		cout << "Enter another number: "; cin >> num;
		
	}

cout << "Odd : " << odd << endl;
cout << "Even : " << even << endl;

	return 0;
}