#include <iostream>
using namespace std;

    void GameStory()
    {
  cout << "                             *****Rezero:Cursed*****               \n";
  cout<<  "                            ..........................              \n";
  cout<<  "                                                                   \n";      
         

  cout << "1. Mansi relocates to her late husband's village home with her son "
          "after his death.\n";

  cout << "2. She soon hears disturbing rumors about sinister rituals that "
          "occurred in the mansion.\n";

  cout << "3. While exploring the home, Mansi discovers a book revealing that "
          "the evil spirit is her late husband's father.\n";

  cout << "4. A fierce battle for survival starts as Mansi fights to protect "
          "her son from the evil presence.\n";

  cout << "5. In the end, she was able to defeat the evil spirit but not "
          "without paying the ultimate price \n";
          
    }
    
    
    class Player
    {
      public:
      int health;
      int attack_power;
      
      Player(int h,int ap)
      {
          health=h;
          attack_power=ap;
      }
      
      void ShowPlayerStatus()
      {
          cout<<"Player Status is *..*\n";
          cout<<"Health is::"<<health<<endl;
          cout<<"Atack Power is::"<<attack_power<<endl;
          
      }
      
      ~Player()
      {
          cout<<"Hello I am a destructor"<<endl;
      }
      
    };

int main() {
    
    GameStory();
    
    Player* player = new Player(100,20);
    
    player->ShowPlayerStatus();
    
    delete player;
    
    
    
    

}
