

#include <iostream>

using namespace std;

class Player
{
    public:
  Player()
  {
      cout<<"Creating an object of class player"<<endl;
  }
  ~Player()
  {
      cout<<"Deleting object of class Player"<<endl;
  }
};

class StrongPlayer : public Player
{
    public:
  StrongPlayer()
  {
      cout<<"Creating an object of class Strong Player"<<endl;
  }
  
};

int main()
{
   StrongPlayer strongPlayerObj;

    return 0;
}
