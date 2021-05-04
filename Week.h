#include <iostream>
#include <vector>
#include "Day.h"
using namespace std;

class Week{
  private:
    Day days[7];
  public:
    Week();
    void getDaysWeek();
    void registerDay(string);
    void getDaysOcuppied();
};

//Constructor of the class Week. Initializes the object setting the days of the week and their correspondent number.
Week:: Week(){
  for (int i = 1; i <= 7; i++) {
    Day d1;
    d1.setNumber(i);
    if (i == 1)
      d1.setName("Monday");
    if (i == 2)
      d1.setName("Tuesday");
    if (i == 3)
      d1.setName("Wednesday");
    if (i == 4)
      d1.setName("Thursday");
    if(i == 5)
      d1.setName("Friday");
    if (i == 6)
      d1.setName("Saturday");
    if (i == 7)
      d1.setName("Sunday");
    days[i-1] = d1;
  }
}

void Week:: getDaysWeek(){
  for (int i = 0; i < 7; i++) {
    cout<<days[i].getName()<<endl;
  }
}

void Week:: registerDay(string input){
  for(int i = 0 ; i < 7; i++){
    if (days[i].getName() == input){
      days[i].setOccupied(true);
      i = 7;
    }
  }
}

void Week:: getDaysOcuppied(){
  for (int i = 0; i < 7; i++) {
    if (days[i].getOccupied() == true)
      cout<<days[i].getName()<<endl;
  }
}
