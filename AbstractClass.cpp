

#include <iostream>

using namespace std;

class Enemy{
    
  virtual void attack() = 0;
  
};

class BossEnemy : public Enemy
{
  void attack()
  {
      cout<<"Boss is attacking."<<endl;
  }
};

int main()
{
    
    Enemy *enemy = new Enemy();
    
    BossEnemy bossEnemy;
    enemy = &bossEnemy;
    bossEnemy->attack();
    
    

    return 0;
}
