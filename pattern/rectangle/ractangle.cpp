// creating a ractangle pattern
#include<iostream>

int main() {
   
   int rows, col;

   std::cout << "Enter the rows: "; std::cin>>rows;
   std::cout << "Enter the cols: "; std::cin>> col;

   for(int i =0; i<rows; i++){ 
       
       for(int j=0; j<col; j++)
        std::cout << " * ";

    std::cout << std::endl;
   }
    
   
return 0;
}