#include <iostream>
#include <vector>
#include "Day.h"
using namespace std;

class Week{
  private:
    //The class Week only has as atributes an array of the days of the week
    Day days[7];
  public:
    Week();
    void getDaysWeek();
    void registerDay(string,int,string);
    void getDaysOcuppied();
    void deleteAct(string,int);
};

//Constructor of the class Week. Initializes the object setting the days of the week and their correspondent number.
Week:: Week(){
  for (int i = 1; i <= 7; i++) {
    Day d1;
    // d1.setNumber(i);
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

//Method getDaysWeek, which prints all the days of the week by name
void Week:: getDaysWeek(){
  for (int i = 0; i < 7; i++) {
    cout<<days[i].getName()<<endl;
  }
}

//Method registerDay, that's called by the registerAct function and checks if the day is already occupied, if it is, it turns occupied to true
void Week:: registerDay(string day, int hour, string description){
  for(int i = 0 ; i < 7; i++){
    //When the input day matches the correspondent day, it will change it's state to occupied and it will change the state of the hour to occupied as weel
    if (days[i].getName() == day){
      days[i].setDayOccupied(true);
      days[i].setHourOccupied(hour,description);
      i = 7;
    }
  }
}

//Method getDaysOcuppied, which calls the printHoursOccupied function to print all the days occupied
void Week:: getDaysOcuppied(){
  for (int i = 0; i < 7; i++) {
    if (days[i].getDayOccupied() == true)
      days[i].printHoursOccupied();
  }
}

void Week:: deleteAct(string day, int hour){
  bool occupied = true;
  for(int i = 0 ; i < 7; i++){
    //When the input day matches the correspondent day, it will change it's state to occupied and it will change the state of the hour to occupied as weel
    if (days[i].getName() == day && days[i].getDayOccupied() == true){
      //Change then state of that specific hour to false
      days[i].setHourAvailable(hour);
      i = 7;
    }
    else
      occupied = false;
  }
  //If the day isn't occupied then the program will send a message to the user
  if (occupied == false) {
      cout<<endl;
      cout<<"This day doesn't have any activity"<<endl<<endl;
  }


}
