//David Zarate Lopez
//Program designed to create a weekly schedule as a .txt
//Last Modified: 04/05/21
#include <iostream>
#include "Week.h"
using namespace std;

void registerAct(Week &wk){
  string day="";
  cout<<"In which day would you like to register the activity?"<<endl;
  cin>>day;
  wk.registerDay(day);
}

void deleteAct(){

}

void exportSched(){

}

void exit(){

}

void printSchedule(Week &wk){
  wk.getDaysOcuppied();
}




int main(){
  int n = 0, in = 0;
  Week wk;
  //Schedule myschedule();
  cout<<"Hello! Welcome to your Personal Week Schedule Generator"<<endl;
   // wk.getDaysWeek();
  while(n != 5){
    cout<<"What would you like to do?"<<endl;
    cout<<"1) Register an activity"<<endl;
    cout<<"2) Delete an activity"<<endl;
    cout<<"3) Print Schedule"<<endl;
    cout<<"4) Export Schedule"<<endl;
    cout<<"5) Exit"<<endl;
    cin>>in;
  //
    if(in == 1)
      registerAct(wk);
  //   if(in == 2){
  //     cout<<"In which day would you like to delete the activity?"<<endl;
  //     deleteAct();

    if(in == 3)
      printSchedule(wk);
    if(in == 4)
      exportSched();
    if (in == 5)
      n = 5;
  //
  }



}
