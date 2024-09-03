
#include <iostream>
using namespace std;

class Player
{
  int health,lives;
  
  public:
  
  Player(int health1,int lives1)
  {
      health = health1;
      
      lives = lives1;
      cout<<"I am a player, I just got spawned!... My health is ->" <<health<<endl;
  }
  
  Player()
  {
      
  }
  
  ~Player()
  {
      cout<<"I am a player and i just died"<<endl;
  }
};

class FastPlayer : public Player{
  int speed;
  public:
  
  FastPlayer(int a,int b,int c) : Player(a,b)
  {
      speed = c;
  }
  FastPlayer()
  {
      cout<<"i am a FastPlayer class contru"<<endl;
  }
  
  ~FastPlayer()
  {
      cout<<"I am a fast player and I just Died"<<endl;
  }
};

void LocalObjects()
{
    Player *player = new Player();
      FastPlayer *fastPlayer = new FastPlayer(1,2,3);
        delete player;
}

int main()
{
   

   FastPlayer *fastPlayer = new FastPlayer();
  LocalObjects();
  

  delete fastPlayer;

    return 0;
}
