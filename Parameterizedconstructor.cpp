

#include <iostream>
using namespace std;

class Player
{
  int health;
  int score;
  public:
  Player(int health)
  {
      cout<<"Hi, I am a custom constructor of Class Player, some call me parameterized constructor as well." 
      <<"Basically, developers use me to set the specific values to the variables."<<endl;
  }
  
  Player()
  {
      health =100;
      score = 200;
  }
  
  void GetHealth()
  {
      cout<<health<<endl;
      cout<<score<<endl;
  }
  
};
int main()
{
   Player *player =  new Player(20);
   
    Player *player2 =  new Player();
    
    player2->GetHealth();

    return 0;
}
