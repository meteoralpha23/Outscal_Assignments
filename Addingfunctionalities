#include <iostream>
using namespace std;

 
 
void 
GameStory () 
  { 
cout <<

"                             *****Rezero:Cursed*****               \n";
  
 
cout <<
	
"                            ..........................              \n";
  
 
cout <<
	
"                                                                   \n";
  
 
 
 
cout <<
	
"1. Mansi relocates to her late husband's village home with her son " 
	"after his death.\n";
  
 
 
cout <<
	
"2. She soon hears disturbing rumors about sinister rituals that " 
	"occurred in the mansion.\n";
  
 
 
cout <<
	
"3. While exploring the home, Mansi discovers a book revealing that " 
	"the evil spirit is her late husband's father.\n";
  
 
 
cout <<
	
"4. A fierce battle for survival starts as Mansi fights to protect " 
	"her son from the evil presence.\n";
  
 
 
cout <<
	"5. In the end, she was able to defeat the evil spirit but not " 
	
"without paying the ultimate price \n";

 
 
} 
 
 
class Player 
 { 
private:
int health = 100;
int healingPower = 8;
int spiritHealth=100;
public:
Player () 
 { 
cout <<
      "Mansi stood at the edge of the village, holding her son's hand." << endl;
cout <<
	  "They looked at the old mansion that was now their home. The sun was setting, casting long shadows."
	  << endl;
cout <<
	  "After her husband's sudden death, Mansi was heartbroken but determined."
	  << endl;
cout <<
	  "She wanted to protect her son and uncover the secrets the mansion held."
	  << endl;
cout <<
	  "The villagers spoke of strange rituals and a terrifying presence within the mansion,"
	  << endl;
cout <<
	  "but Mansi was not afraid. She was ready to confront whatever lay inside."
	  << endl;
cout <<
	  "As they walked into the mansion, Mansi held her son's hand tightly." <<
	  endl;
cout <<
	  "A battle for their lives was about to begin, but she was prepared." <<
	  endl;
cout <<
	  "Mansi was strong, and nothing could stop her from protecting her son."
	  << endl;
	  
	  cout<<"..............................................................."<<endl;
	  
	  cout<<"Your Current Health is::"<<health<<endl;
 } 
 
 int GetHealth()
 {
    return health; 
 }
 
 void TakeDamage()
 {
     
     if(health>0)
     {
         cout<<"Spirit Attacks. Take care of your health"<<endl;
         health=health-damage;
         cout<<"Mansi new Health is ::"<<health<<endl;
     }
     else
     {
         cout<<"Mansi is dead."<<endl;
     }
    
     
 }
 int GiveDamage(int damage)
 {
     if(spiritHealth>0)
     
     {
         cout<<"You hurt the spirit"<<endl;
         spiritHealth=spiritHealth-damage;
     }
     else
     {
         cout<<"You defeated the evil spirit"<<endl;
         
     }
     
     return spiritHealth;
     
     cout<<"Spirit Health is now "<<spiritHealth<<endl;
 }
 
 void Heal()
 {
     
 }
 
 
 
 
};
int 
main () 
 { 
 
 char userInput;
 GameStory (); 
 cout<<endl;
 cout<<endl;
 cout<<"Hi, Welcome to Rezer:Cursed"<<endl;


 
 do
 {
 cout<<"Please press s to start the game"<<endl;
 cout<<"Any other key to exit the game"<<endl;
  cin>>userInput;
     if(userInput=='s' || userInput=='S')
 {
     Player * player = new Player ();
 }
 
 else
 {
     cout<<"Thank you for playing the game";
 } 
 }
 while(userInput=='s' || userInput=='S');

 }
