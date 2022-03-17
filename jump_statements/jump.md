# Jump Statements

Jump statements in C++ are used for the uncoditional flow of control throughout a program's functions. There are four types of jump statements in C++ they are as follows:  

    1. `break`
    2. `continue`
    3. `goto`
    4. `return`


## 1. `break statement` in C++ : 

Terminates the loop or switch statement when encountered, and control return from the loop or switch statement immediately to the first statement after the loop.

**Syntax:**

```cpp
break;
```

**Example**

```cpp
#include<iostream>
#include<vector>

using namespace std;

int main() {
   
   vector<int> arr {1, 3, 5, -2, 3, -4, 7};

   for(int i = 0; i < arr.size(); i++)
   {
      // if array contains negetive value, break the loop
      if( arr[i] < 0)
      {
         cout <<"The array contains negetive integer"<< endl;
         break;
      }
   }
   
return 0;
}
```

**Output**

```cpp
The array contains negative integer
```

****

## 2. `continue statement` in C++ : 

The continue statement is used to skip the current iteration of the loop, and the control of the program goes to the next iteration.

**Syntax:**

```cpp
continue;
```

**Example**

```cpp
#include<iostream>
#include<vector>

using namespace std;

int main() {
   
   vector<int> arr {1, 3, 5, -2, 3, -4, 7};

   for(int i = 0; i < arr.size(); i++)
   {
      // if array contains any negative integer, skip the integer
      if( arr[i] < 0)
         continue;

      cout << arr[i] << " ";
   }
   
return 0;
}
```

**Output**

```
1 3 5 3 7
```

****

## 3. `goto statement` in C++ : 

The goto statement is used to alter the normal sequence of program execution by transferring contrl to som other part of the program. The goto statement can be used to jump from anywhere to anywhere within a function.

### **Syntax 1:**

```cpp
goto label;
.
.
. 
label:
```

**Example 1**

```cpp
#include<iostream>
#include<vector>

using namespace std;

int main() {

   int n;
   cout << "Enter the number to chek if it's even or odd: "; 
   cin >> n;

   printeven:
      cout << "Even number" << endl;
      return 0;

   printodd:
      cout << "Odd number" << endl;
      return 0;

   if((n % 2) == 0 )
      goto printeven;
   else
      goto printodd;


return 0;
}
```

**Output**

```
Enter the number to chek if it's even or odd: 2

Even number
```

### **Syntax 2:**

```cpp
label:
.
.
.

goto label;
```

**Example 2**

```cpp
#include<iostream>

int main() {

   int num = 1;

   print:
      std::cout << num << " ";
      num++;

      if(num <= 5)
         goto print;


return 0;
}
```

**Output**

```
1 2 3 4 5
```

****

## 4. `return statement` in C++ :

The return statement is used to terminate a function's execution and transfer program control back to the calling funcition. It can also specigy a value to be returned by the function. A function may conatain one or more return statements.

**Syntax:**

```cpp
return [expresion];
```

**Example**

```cpp
#include<iostream>

using namespace std;

// function returns the sum of its arguments
int sum(int a, int b){

   int s1 = a+ b;
return s1;
}

// voids function to print the statement
void print(int s2){
   cout << "\nThe sum of the two numbers is " << s2;
}


int main() {
   int num1, num2;

   cout << "Enter the first number: "; cin >> num1;
   cout << "Enter the second number: "; cin >> num2;

   int result = sum(num1, num2); // pass the input as arguments
   print(result); // pass the result 

return 0;
}
```

**Output**

```
Enter the first number: 2
Enter the second number: 2

The sum of the two numbers is 4
```