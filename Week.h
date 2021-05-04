#include <iostream>
#include <vector>
#include "Day.h"
using namespace std;

class Week{
  private:
    vector<Day> days;
  public:
    Week();
    // void getDaysWeek();
};

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
    days.push_back(d1);
  }
}
//
// void getDaysWeek(){
//   for (int i = 0; i < days.size(); i++) {
//     cout<<days[i].getName()<<endl;
//   }
//}
