// This program gives the value of the exponents of 2.

#include <iostream>

int main() {
int pow = 1;
    for(int i =0; i < 17 ; i ++){

        std::cout << "2 to the power of " << i << " is " << pow << std::endl;
        
        pow *= 2;
    }

}
