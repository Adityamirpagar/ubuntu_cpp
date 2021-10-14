// sorting an array using bubble sort alogrithms.

#include <iostream>
using namespace std;

int main() {

int max = 10;
    int i, j,n;
    int arr[max];


//getiing the length for array
cout<< "Enter the array length : "; cin >> n;

//looping until the array is filled
    for( i = 0; i < n; i++){
        cout << "Enter the element [" << i + 1<< "]: " ; cin >> arr[i];
    }

// seeing the array element 
cout << "Your entered unordered elements is \n";
for(int i = 0; i < n; i++){
     
    cout << arr[i] << "    ";
}

// creating a temporary variable
int t_var;
    
//bubble sort
for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
        if(arr[i] > arr[j]){
            t_var = arr[i];
            arr[i] = arr[j];
            arr[j] = t_var;
        }
    }
}
    
   //printing the sorted order of elements.

cout << "\n\nThe sorted array of your elements, in ascending order are: \n";

for (int i = 0; i < n; i ++)
    cout << arr[i] << "    ";
cout << endl;
    
    
}
