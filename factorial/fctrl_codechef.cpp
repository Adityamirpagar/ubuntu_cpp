#include<iostream>
#include<vector>
#include<algorithm>

//using namespace std;

int main() {

int t;
std::cin >> t;

while(t--)
{
        int n ;
        std::cin >> n;
        
         std::vector<int> arr;
         arr.push_back(1);
         for(int x = 2; x <=n; x++){
             int carry = 0;
         for(int i =0; i < arr.size(); i++){
             int prod = arr[i] * x + carry;

             arr[i] = prod % 10;
             carry = prod / 10;
        }
         while(carry != 0){
             arr.push_back(carry%10);
             carry /= 10;
        }
    }
     reverse(arr.begin(), arr.end());

         for( auto i : arr)
             std::cout << i;
        
        std::cout << std::endl;
            
}
return 0;
}


