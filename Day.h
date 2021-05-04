#include <iostream>
#include <string>
using namespace std;

class Day {
  private:
  //string name will be the name of the Day, for example: Monday
  string name;
  //number will be which day of the week is, for example: Monday = day 1
  int number;
  public:
  Day();
  string getName();
  void setName(string);
  int getNumber();
  void setNumber(int);
};

Day:: Day(){

}
string Day::getName(){
  return name;
}

void Day::setName(string name1){
  name = name1;
}

int Day::getNumber(){
  return number;
}

void Day::setNumber(int number){
  number = number;
}
