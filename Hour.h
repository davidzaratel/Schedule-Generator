#include <iostream>
#include <vector>

using namespace std;

class Hour{
  private:
    int number;
    bool occupied;
    string description;
  public:
    Hour();
    int getNumber();
    void setNumber(int);
    string getDescription();
    void setDescription(string);
    bool getOccupied();
    void setOccupied(bool oc);
};

//Constructor of the class
Hour:: Hour(){
  occupied = false;
  description = "";
}

int Hour::getNumber(){
  return number;
}

void Hour::setNumber(int num){
  number = num;
}

string Hour::getDescription(){
  return description;
}

void Hour::setDescription(string des){
  description = des;
}

bool Hour:: getOccupied(){
  return occupied;
}

void Hour:: setOccupied(bool oc){
  occupied = oc;
}
