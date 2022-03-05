// creating a qudrilateral with hollow centre
#include<iostream>

int main() {

    int row, col;

    std::cout << "Enter the rows: "; std::cin >> row;
    std::cout << "Enter the columns: "; std::cin >> col;

    for(int i = 1; i<=row; i++){
        for(int j = 1; j<= col; j++){

            if((i == 1 || i == row) || (j == 1 || j == col)) // put all the stars only if it's first "row/column" and last "row/column"
                std::cout << "*";
            else                                             // or else print the space if condition not satisfied.
                std::cout << " ";
        }
     std::cout << std::endl; // after each row change to new line.
    }
   
   
return 0;
}