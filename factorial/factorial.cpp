#include<iostream>
#include<vector>
#include<algorithm>

//using namespace std;

std::vector<int> fact(int n);

int main() {

int t;
std::cin >> t;

while(t--)
{
    int n ;
    std::cin >> n; 

    for( auto i : fact(n)) // iterating the array
        std::cout << i;
    
    std::cout << std::endl;
}
return 0;
}

// factorial function
std::vector<int> fact(int n){
    std::vector<int> arr;
    
    arr.push_back(1); // arr[0] = 1

    // loop until the x == n
    for(int x = 2; x <=n; x++){
        int carry = 0;
        // loop until i == arr.size()-1.
        for(int i =0; i < arr.size(); i++){
            
            int prod = arr[i] * x + carry;
            arr[i] = prod % 10;
            carry = prod / 10;
            
        }
        // while(carry != 0)
        while(carry){
            arr.push_back(carry%10); // keep adding the unit value to the end of the array
            carry /= 10; // until the value inside carry is 0
        }
    }
    reverse(arr.begin(), arr.end()); // reverse the resulting array (#include <algorithm>)
    
    //return the vector
    return arr;
}

