#include <iostream>
#include <vector>

using namespace std;

class Hour{
  private:
    int number;
    bool occupied;
  public:
    Hour();
    bool getOccupied();
    void setOccupied();
};

Hour:: Hour(){

}

bool Day:: getOccupied(){
  return occupied;
}

void Day:: setOccupied(bool oc){
  occupied = oc;
}
