#include <iostream>
#include <string>
#include "Hour.h"
using namespace std;

class Day {
  private:
  //string name will be the name of the Day, for example: Monday
  string name;
  //The next atribute is an array of the 24 hours a day has
  Hour hours[24];
  //The occupied atribute helps to identify if a day is occupied or not
  bool occupied;
  //numact stores the total number of activities a day has
  int numact;
  public:
  Day();
  string getName();
  void setName(string);
  int getNumAct();
  void setNumAct(int);
  bool getDayOccupied();
  void setDayOccupied(bool);
  void setHourOccupied(int, string);
  void setHourAvailable(int);
  void printHoursOccupied();
  void exportHoursOccupied(ofstream&);

};

//Constructor of the class Day. Initializes the object setting the hours of the day and their correspondent number.
//The hours are in 24hrs setting
Day:: Day(){
  occupied = false;
  hours[0].setNumber(1);
  hours[1].setNumber(2);
  hours[2].setNumber(3);
  hours[3].setNumber(4);
  hours[4].setNumber(5);
  hours[5].setNumber(6);
  hours[6].setNumber(7);
  hours[7].setNumber(8);
  hours[8].setNumber(9);
  hours[9].setNumber(10);
  hours[10].setNumber(11);
  hours[11].setNumber(12);
  hours[12].setNumber(13);
  hours[13].setNumber(14);
  hours[14].setNumber(15);
  hours[15].setNumber(16);
  hours[16].setNumber(17);
  hours[17].setNumber(18);
  hours[18].setNumber(19);
  hours[19].setNumber(20);
  hours[20].setNumber(21);
  hours[21].setNumber(22);
  hours[22].setNumber(23);
  hours[23].setNumber(24);
  numact = 0;
}

string Day::getName(){
  return name;
}

void Day::setName(string name1){
  name = name1;
}


int Day::getNumAct(){
  return numact;
}

void Day::setNumAct(int num){
  numact += num;
}

bool Day:: getDayOccupied(){
  return occupied;
}

void Day:: setDayOccupied(bool oc){
  occupied = oc;
}

//This method changes the state of the input hour ONLY IF the hour is not occupied, if it is, it will print a message to the user
void Day:: setHourOccupied(int hour, string description){
  cout<<endl;
  //If the hour is not occupied then it can be registered
  if (hours[hour-1].getOccupied() == false){
    hours[hour-1].setOccupied(true);
    hours[hour-1].setDescription(description);
    setNumAct(1);
    cout<<"The activity was successfully registered!"<<endl;
  }
  else
    cout<<"This hour is already occupied"<<endl;
}

//This method changes the state of the Hour the user wants for it to be available and delete the activity
void Day:: setHourAvailable(int hour){
  cout<<endl;
  //If the hour is occupied then it can be deleted
  if (hours[hour-1].getOccupied() == true){
    hours[hour-1].setOccupied(false);
    setNumAct(-1);
    //If the day doesn't have any activities, it will change it's state to not occupied
    if (getNumAct() == 0)
      setDayOccupied(false);
    cout<<"The activity is successfully deleted!"<<endl;
  }
  else
    cout<<"This hour is already available"<<endl;
}

//This method prints only the Hours that are occupied by an activity
void Day :: printHoursOccupied(){
  cout<<"You have activties on "<<getName()<<":"<<endl;
  for (int i = 0; i < 24; i++) {
    if (hours[i].getOccupied() == true)
      cout<<"   - At "<<hours[i].getNumber()<<":"<<"00 you have: "<<hours[i].getDescription()<<endl;
  }
  cout<<endl;
}

//This method exports to a file only the Hours that are occupied by an activity
void Day :: exportHoursOccupied(ofstream& file){
  file<<"You have activties on "<<getName()<<":"<<endl;
  for (int i = 0; i < 24; i++) {
    if (hours[i].getOccupied() == true)
      file<<"   - At "<<hours[i].getNumber()<<":"<<"00 you have: "<<hours[i].getDescription()<<endl;
  }
  file<<endl;
}
