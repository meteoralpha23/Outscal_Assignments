
#include <iostream>

using namespace std;

class Player
{
int playerHealth;
public:

void setPlayerHealth(int playerHealthnew)
{
    playerHealth = playerHealthnew;
}

int getPlayerHealth()
{
    return playerHealth;
}

};
int main()
{
    
    Player *player = new Player();
    
    
    player->setPlayerHealth(200);
    
    cout<<"Player Health is "<<player->getPlayerHealth()<<endl;
    
    delete player;
    
    

    return 0;
}
