#include <bits/stdc++.h>

using namespace std;

class Player{
    public:
    Player()
    {
        cout<<"I am a player, I just not spawned"<<endl;
    }
    ~Player()
    {
        cout<<"Ops, that enemy killed me, I just died!"<<endl;
    }
    
};

int main() {
	
	
	
	
	Player player;
	
 	Player *playerptr = new Player();
 	delete playerptr;
	

}
