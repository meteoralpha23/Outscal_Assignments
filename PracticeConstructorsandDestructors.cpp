

#include <iostream>
using namespace std;
class Player{
  
    private:
  int health,movement_speed;
  
  public:
  
  Player()
  {
      
  }
  Player(int initialHealth, int speed)
  {
      health = initialHealth;
      speed = movement_speed;
      
      cout<<"I am a custom Constructor "<<endl;
      cout<<"Health is ::"<<health<<endl;
      cout<<"movement_speed is ::"<<health<<endl;
      
  }
  
  ~Player()
  {
      
      cout<<"I am a destructor"<<endl;
  }
  

  
};
int main()
{
    Player *player =  new Player();
    Player *player2 =  new Player(10,20);
    
    

    return 0;
}
