//David Zarate Lopez
//Program designed to create a weekly schedule as a .txt
//Last Modified: 23/06/21

#include <iostream>
#include <fstream>
#include "Week.h"
using namespace std;

//Function to register an activty in the schedule
void registerAct(Week &wk){
  string day = "", time = "", description = "";
  int hour = 0, min = 0;
  //First the program asks for the day of the activity
  cout<<"In which day would you like to register the activity?"<<endl;
  cin>>day;
  //Then for the specific time, in this case, first I want to limit the user to only use the 24hrs notation
  cout<<"At what time is this activity?"<<endl;
  cin>>time;
  cout<<"Describe briefly the activity:"<<endl;
  getline(cin, description);
  getline(cin, description);
  //convert the first two characters into integers to get the hour
  hour = stoi(time.substr(0,2));
  //convert the last two characters into integers to get the minutes
  min = stoi(time.substr(3,2));
  // cout<<hour<<":"<<min<<endl;
  //Call method register day that will
  wk.registerDay(day,hour,description);
  cout<<endl;

}

void deleteAct(Week &wk){
  string day = "", time = "";
  int hour = 0, min = 0;
  //First the program asks for the day in which the user wants to delete and activity
  cout<<"In which day would you like to delete the activity?"<<endl;
  cin>>day;
  //Then for the specific time, in this case, first I want to limit the user to only use the 24hrs notation
  cout<<"At what time is this activity?"<<endl;
  cin>>time;
  //convert the first two characters into integers to get the hour
  hour = stoi(time.substr(0,2));
  //convert the last two characters into integers to get the minutes
  min = stoi(time.substr(3,2));
  //Call method deleteAct that will delete the desired activty
  wk.deleteAct(day,hour);
  cout<<endl;
}

void exportSched(Week &wk){
  //Create the ofstream variable
  ofstream exportfile;
  //Open the file where the Schedule will be exported
  exportfile.open("exportedSchedule.txt");
  //Call the method that exports the info to the file
  wk.exportSchedule(exportfile);
  exportfile.close();
  cout<<"Your Schedule was exported successfully!"<<endl<<endl;
}


//Function that prints the generated schedule, so the user can see all of his/her activies
void printSchedule(Week &wk){
  //Calls getDaysOcuppied method
  wk.printSchedule();
}




int main(){
  int n = 0, in = 0;
  //Create Week instance, which will be the object used in the program
  Week wk;
  cout<<"Hello! Welcome to your Personal Week Schedule Generator"<<endl;
  while(n != 5){
    cout<<"What would you like to do?"<<endl;
    cout<<"1) Register an activity"<<endl;
    cout<<"2) Delete an activity"<<endl;
    cout<<"3) Print Schedule"<<endl;
    cout<<"4) Export Schedule"<<endl;
    cout<<"5) Exit"<<endl;
    cin>>in;
    cout<<endl;
  //
    if(in == 1)
      registerAct(wk);
    if(in == 2)
      deleteAct(wk);
    if(in == 3)
      printSchedule(wk);
    if(in == 4)
      exportSched(wk);
    if (in == 5){
      n = 5;
      cout<<"Have a wonderful week!"<<endl<<endl;
    }

  //
  }



}
