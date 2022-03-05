# Creating patterns using cpp


## Create a qudrilateral

```cpp
#include<iostream>

int main() {
    int row, col;

    std::cout << "Enter the rows: "; std::cin >> row;
    std::cout << "Enter the columns: "; std::cin >> col; 

    for(int i = 1; i <= row; i++){
        
        for(int j = 1; j <= col; j++)
            std::cout << " *";

        std::cout << std::endl;
    }

return 0;
}
```

**output**

```
Enter the rows: 5
Enter the columns: 4
 * * * *
 * * * *
 * * * *
 * * * *
 * * * *
```
****

## Create a hollow qudrilateral

```cpp
#include<iostream>

int main() {
    int row, col;

    std::cout << "Enter the rows: "; std::cin >> row;
    std::cout << "Enter the columns: "; std::cin >> col; 

    for(int i = 1; i <= row; i++){
        
        for(int j = 1; j <= col; j++){

            if( (i == 1 || i == row) || (j == 1 || j == col) )
                std::cout << " *";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }

return 0;
}
```

**Output**

```
Enter the rows: 5
Enter the columns: 4
 * * * *
 *     *
 *     *
 *     *
 * * * *
```
****

## Create a half pyramid

```cpp
#include<iostream>

int main() {

    int n;
    std::cout << "Enter the number: "; std::cin >> n;

    for(int i = 1; i <= n; i++){
        
        for(int j = 1; j <= i; j++)
            std::cout << " *";

        std::cout << std::endl;
    }

return 0;
}
```

**Output**
```
Enter the number: 5
 *
 * *
 * * *
 * * * *
 * * * * *
```

****

## Create inverted half pyramid

```cpp
#include<iostream>

int main() {

    int n;
    std::cout << "Enter the number: "; std::cin >> n;

    for(int i = n; i >= 1; i--){
        
        for(int j = 1; j <= i; j++)
            std::cout << " *";

        std::cout << std::endl;
    }

return 0;
}
```

**Output**

```
Enter the number: 5
 * * * * *
 * * * *
 * * *
 * *
 *
```

## Create a half pyramid with 180 degree rotation

```cpp
#include<iostream>

int main() {

    int n;
    std::cout << "Enter the number: "; std::cin >> n;

    for(int i = 1; i <= n; i++){
        
        for(int j = 1; j <= n; j++){
            if(j <= (n - i))
                std::cout << "  ";
            else
                std::cout << " *";
        }
        std::cout << std::endl;
    }

return 0;
}
```

**Output**
```
Enter the number: 5
         *
       * *
     * * *
   * * * *
 * * * * *
```
****

## Create a half pyramid with incrementing numbers

```cpp
#include<iostream>

int main() {

    int n;
    std::cout << "Enter the number: "; std::cin >> n;

    for(int i = 1; i <= n; i++){
        
        for(int j = 1; j <= i; j++)
            std::cout << j << " ";

        std::cout << std::endl;
    }

return 0;
}
```

**Output**

```
Enter the number: 5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
```
****

## Create a half pyramid with same row number

```cpp
#include<iostream>

int main() {

    int n;
    std::cout << "Enter the number: "; std::cin >> n;
    
    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++)
            std::cout << i << " ";

        std::cout << std::endl;
    }

return 0;
}
```

**Output**

```
Enter the number: 5
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
```

****

## Create half pyramid with alphabets
```cpp
#include<iostream>

int main() {

    int n;
    std::cout << "Enter the number: "; std::cin >> n;

   char alpha = 'A' - 1;

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++)
            std::cout << char(i + alpha) << " ";

        std::cout << std::endl;
    }

return 0;
}
```

**Output**

```
Enter the number: 5
A 
B B 
C C C 
D D D D 
E E E E E 
```

****

## Create half pyramid with incrementing alphabets

```cpp
#include<iostream>

int main() {

    int n;
    std::cout << "Enter the number: "; std::cin >> n;

    char alpha = 'A' - 1;

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++)
            std::cout << (char)(j+alpha) << " "; // using char()

        std::cout << std::endl;
    }

return 0;
}
```

**Output**
```
Enter the number: 5
A 
A B 
A B C 
A B C D 
A B C D E 
```

****

## Create a half pyramid of 180 degree rotation, with alphabets 

```cpp
#include<iostream>

int main() {

    int n;
    std::cout << "Enter the number: "; std::cin >> n;

    char alpha = 'A' - 1;

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n; j++){

            if(j <= (n - i))
                std::cout << "  ";
            else
                std::cout << (char)(j + alpha) << " ";
        }
        std::cout << std::endl;
    }

return 0;
}
```

**Output**

```
Enter the number: 5
        E 
      D E 
    C D E 
  B C D E 
A B C D E 
```

****

## Create a inverted half pyramid with alphabets

```cpp
#include<iostream>

int main() {

    int n;
    std::cout << "Enter the number: "; std::cin >> n;

    char alpha = 'A' - 1;

    for(int i = n; i >= 1; i--){

        for(int j = 1; j <= i; j++)
            std::cout << char(j + alpha) << " ";

        std::cout << std::endl;
    }

return 0;
}
```
**Output**

```
Enter the number: 5
A B C D E 
A B C D 
A B C 
A B 
A 
```

****

## Creating a floyd's triangle

```cpp
// floyds triangle
#include<iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter the number: "; cin >> n;

    int count = 1;
    
    for(int i = 1; i <= n; i++){
        
        for(int j = 1; j <= i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    
return 0;
}
```
**Output**

```
Enter the number: 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
```

