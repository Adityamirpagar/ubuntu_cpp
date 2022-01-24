#include<iostream>
#include<vector>

using namespace std;

int main(){


// make a 2d array for 31 days each day has 24 hours individual.
vector<vector<flaot>> air_temp(31, vector<float>(24));


// calculate the monthly average noon air temperature.
/*
average = sum of all the elements / total size of the set.
*/
float sum = 00.0;
//sum of all the readings at noon(11).
for(int days = 0; days < 31; days++){
    sum += air_temp[days][11]; 
}
// average
float average = sum / 31;

cout <<"The aveage air temp at noon, for month is: " << average << endl;


// Determine the highest temperature of the whole month.
float highest_temp = 40;
// loop through each hour, of each day.
for(int day = 0; day < 31; day++){
    for(int hour = 0; hour < 24; hour++){
        if(air_temp[day][hour] >40){
            highest_temp = air_temp[day][hour];
        }
    }
}
cout <<"The highest air temp of the month is = " << highest_temp << endl;


// count days when temperatur at noon was at least 20 degree C.
int hotdays = 0;

// looping through each hour of each day, for a month period
for(int day = 0; day < 31; day++){
    for(int hour =0; hour < 24; hour++){
        if(air_temp[day][hour] >= 20){
            hotdays++;
        }
    }
}
cout << "The number of the days that were above 20 degree C is: " << hotdays << end;


return 0;
}