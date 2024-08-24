

#include <iostream>
#include<string>

using namespace std;

enum PlayerType
{   Defender,
    Attacker
    
};

class Player
{
    public:
    
    PlayerType playerType;
    Player()
    {
        playerType = Defender;
    }
    

    string playerStateString()
    {
    switch (playerType)
    {
    case Defender:
    
        return "Defender";
    
    
    case Attacker:
    
        return "Attacker";
    

    default:
    
        return 0;
    
    }
    }
};

class Enemy : public Player
{
    public:
    
    Enemy()
    {
        playerType = Attacker;
    }
    
};

int main()
{
    Enemy *enemy = new Enemy();
    
    cout<<enemy->playerStateString();
    return 0;
}
