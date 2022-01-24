# Hotel guests

Imagine a huge hotel with 3 buildings. And each building has 15, and each floor has 20 rooms.

**How many rooms are there in the 3 buldings.**

```cpp
// Total no. of rooms
int rooms = 0;

/*
b is for buildings,
f is for floor,
And, r is for room.
*/

for(int b = 0; b < 3; b++){ 
    for(int f = 0; f < 15; f++){
        for(int r = 0; r < 20; r++){
            rooms++;
        }
    }
}
cout <<"There are total " << rooms << endl;
```


**1. We have to create an array that can hold the info for all the rooms, in all 3 buildings.**

```cpp
// Create an array to hold info for all the rooms.
vector<vector<vector<int>>> guest(3, vector<vector<int>>(15, vector<int>(20)));
```


**2. Book a room for two newlyweds: in the 2nd building, on the 10th floor, room 14.**

```cpp
// Book a room for 2 newlyweds: on 2nd building, 10th floor, room no. 14.
guest[1][9][13] = 2; // beacause i = 0; in a for loop.
```

**3.Are there any vacancies on 10th floor, in the 2nd buliding.**

```cpp
// Are there any vacancies on 10th floor, in the 2nd buliding
int vacant = 0;
for(int r = 0; r < 20; r++){
    if(guest[1][9][r] == 0){
        vacant++;
    }
}
cout<< "There are "<< vacant << " rooms empty and " << 20 - vacant << " room has guests. " << endl;
```


**3. Check if there are any vacancies on the 15th floor, of the 3rd bulding.**

```cpp
// Check how many vacancies on 15th floor, in 3rd building.
int vacancies = 0;

for(int r = 0; r < 20; r++){
    if (guest[2][14][r] == 0 ){
        vacancies++;
    }
}
cout <<"There are " << vacancies << " on the 15th floor of 2nd bulding. " << endl;
```

