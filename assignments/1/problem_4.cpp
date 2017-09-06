#include <iostream>
#include <string>

using namespace std;

/* I could have substituted Day with two arrays but we learned about class/struct today in class so why not :) */

/* The range based for loop on line 30 requires the '-std=c++11' flag to be set while using g++*/
struct Day{
     int money;
     string name;
     Day(string n){
          name = n;
          money = 0;
     }
};

Day days[5] = {Day("Monday"), Day("Tuesday"), Day("Wednesday"), Day("Thursday"), Day("Friday")};


int main(){
     for(int i = 0; i < sizeof(days) / sizeof(days[0]); i++){
          cout << "Enter bulldog bucks spent on " << days[i].name << ": ";
          cin >> days[i].money;
     }

     cout << "MONEY SPENT BAR CHART" << endl;
     cout << "(Each * = $5)" << endl;

     for(Day day : days){
          cout << day.name[0] << ":";
          for(int j = 0; j < day.money / 5; j++){
               cout << "*";
          }
          cout << endl;
     }
}
