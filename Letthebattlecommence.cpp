#include <iostream>
#include <ctime>
using namespace std;

void GameStory()
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

    cout << "5. In the end, she was able to defeat the evil spirit but not "

            "without paying the ultimate price \n";
}

int GetRandomNumber(int min, int max)
{
    srand(time(0));
        int randomNumber = min + (rand() % (max - min + 1));
        
        return randomNumber;
       
}

class Player
{
private:
    int health = 100;
    int minHealingPower = 3;
    int maxHealingPower = 8;
    int minDamage = 5;
    int maxDamage = 20;
   

public:
    Player()

    {
        cout << "Mansi stood at the edge of the village, holding her son's hand." << endl;
        cout << "They looked at the old mansion that was now their home. The sun was setting, casting long shadows."
             << endl;
        cout << "After her husband's sudden death, Mansi was heartbroken but determined."
             << endl;
        cout << "She wanted to protect her son and uncover the secrets the mansion held."
             << endl;
        cout << "The villagers spoke of strange rituals and a terrifying presence within the mansion,"
             << endl;
        cout << "but Mansi was not afraid. She was ready to confront whatever lay inside."
             << endl;
        cout << "As they walked into the mansion, Mansi held her son's hand tightly." << endl;
        cout << "A battle for their lives was about to begin, but she was prepared." << endl;
        cout << "Mansi was strong, and nothing could stop her from protecting her son."
             << endl;

        cout << "..............................................................." << endl;

        cout << "Your Current Health is::" << health << endl;
    }

    int GetHealth()
    {
        return health;
    }

    void TakeDamage(int damage)
    {

        if (health > 0)
        {
            cout << "Spirit Attacks with damage of  " <<damage<<" Take care of your health" << endl;
            health = health - damage;
            cout << "Mansi new Health is ::" << health << endl;
        }
        else
        {
            cout << "Mansi is dead." << endl;
        }
    }
    int GiveDamage()
    {
        srand(time(0));
        int randomDamage = minDamage + (rand() % (maxDamage - minDamage + 1));
       

        return randomDamage;

    }
    
    void PlayerDead()
    {
        health=0;
       
    }

    void Heal()
    {

        srand(time(0));
        int randomHeal = minHealingPower + (rand() % (maxHealingPower - minHealingPower + 1));
        health += randomHeal;

        cout << "Mansi Healed with a HP of::" << randomHeal << endl;
        cout << "Mansi new health is::" << health << endl;
    }
};
class Spirit
{
    private:
    int health = 100;
    int minHealingPower = 3;
    int maxHealingPower = 8;
    int minDamage = 5;
     int maxDamage = 15;

    public:

    Spirit()
    {
        cout<<"The evil spirit appears with glowing eyes and a cold, dark aura. It’s a dangerous, angry force from another world."<<endl;
    }

    int GetHealth()
    {
        return health;
    }

    void TakeDamage(int damage)
    {

        if (health > 0)
        {
            cout << "Spirit is hurt with damage of "<<damage<<"." << endl;
            health = health - damage;
            cout << "Spirit new health is ::" << health << endl;
        }
        else
        {
            cout << "Spirit is dead." << endl;
        }
    }
    int GiveDamage()
    {
        srand(time(0));
        int randomDamage = minDamage + (rand() % (maxDamage - minDamage + 1));
       

        return randomDamage;

    }
        void SpiritDead()
    {
        health=0;
       
    }

  
};

int main()
{
    
     srand(time(0));
    int choice;
    
    Player *player = new Player();
    Spirit *spirit =  new Spirit();

    char userInput;
    GameStory();
    cout << endl;
    cout << endl;
    cout << "Hi, Welcome to Rezero:Cursed" << endl;
    
    cout << "*******Please Read me*******" << endl;
    cout << "There are two choices in the game." << endl;
    cout << "If you press 1, you will choose option 1. If you press any other button, you will choose option 2." << endl;
    cout << endl;
      cout << "As you arrive at the village, do you: (1) Explore the village to gather supplies, or (2) Head straight into the mansion?" << endl;
      cin>>choice;
      
     if(choice==1)
     {
          cout << "You gather health potions and first aid kits." << endl;
     }
     else 
     {
         cout << "You head straight into the mansion." << endl;
     }
       cout<<"Current Health of Spirit and Player"<<endl;
 
    cout<<"Player->"<<player->GetHealth()<<endl;
    
     cout << "You encounter a hostile spirit with 100 health." << endl;
    cout << "Do you: (1) Use your improvised weapon to deal damage to the spirit, or (2) Use knowledge from the book to create a protective barrier?" << endl;
    cin>>choice;
    
    if (choice == 1) {
      spirit->TakeDamage(player->GiveDamage());
    player->TakeDamage(spirit->GiveDamage());
       
    } else {
        cout << "You create a protective barrier." << endl;
    }
    cout<<"Current Health of Spirit and Player"<<endl;
   cout<<"Spirit->"<< spirit->GetHealth()<<endl;
    cout<<"Player->"<<player->GetHealth()<<endl;
    

    cout << "You’ve sustained injuries. Do you: (1) Use a healing item, or (2) Continue exploring despite your injuries?" << endl;
    cin >> choice;
     if (choice == 1)
    {
        player->Heal();
    }
    else
    {
        player->TakeDamage(spirit->GiveDamage());
    }
       cout<<"Current Health of Spirit and Player"<<endl;
   cout<<"Spirit->"<< spirit->GetHealth()<<endl;
    cout<<"Player->"<<player->GetHealth()<<endl;
    
     cout << "You find an ancient book. What will you do? (1) Study the book to unlock spells, or (2) Focus on immediate threats?" << endl;
    cin >> choice;
     if (choice == 1)
    {
        cout << "You gain the ability to heal or deal additional damage in future encounters." << endl;
    }
    else
    {
        cout << "You continue without the book’s advantages." << endl;
    }
    
    cout<<"Current Health of Spirit and Player"<<endl;
   cout<<"Spirit->"<< spirit->GetHealth()<<endl;
    cout<<"Player->"<<player->GetHealth()<<endl;
    
    
    cout << "You hear the spirit approaching your son. Do you: (1) Rush to protect him, (2) Set a trap to distract the spirit" << endl;
    cin >> choice;
     if (choice == 1)
    {
        player->TakeDamage(spirit->GiveDamage());
    }
    else 
    {
        cout << "The trap distracts the spirit." << endl;
    }
     cout<<"Current Health of Spirit and Player"<<endl;
   cout<<"Spirit->"<< spirit->GetHealth()<<endl;
    cout<<"Player->"<<player->GetHealth()<<endl;
    
    cout << "The spirit is approaching. How do you approach the confrontation? (1) Engage in direct combat, (2) Use a ritual from the book, or (3) Attempt to escape and regroup?" << endl;
    cin >> choice;
    if (choice == 1)
    {
        spirit->TakeDamage(player->GiveDamage());
        player->TakeDamage(spirit->GiveDamage());
    }
    else if (choice == 2)
    {
        spirit->TakeDamage(player->GiveDamage());
        player->TakeDamage(spirit->GiveDamage() / 2);
    }
    else
    {
        cout << "You avoid immediate damage but face a tougher encounter later." << endl;
    }
     cout<<"Current Health of Spirit and Player"<<endl;
   cout<<"Spirit->"<< spirit->GetHealth()<<endl;
    cout<<"Player->"<<player->GetHealth()<<endl;
    

     
    cout << "In the final showdown, do you: (1) Sacrifice yourself to ensure your son’s survival,  or (2) Attempt a risky attack?" << endl;
    cin >> choice;

    if (choice == 1)
    {
      
    player->PlayerDead();
    spirit->SpiritDead();
    
    }
   
    else
    {
        if (GetRandomNumber(0, 1) == 0)
        {
            spirit->TakeDamage(player->GiveDamage() + 40);
            cout << "The risky attack succeeded." << endl;
            spirit->SpiritDead();
        }
        else
        {
            player->TakeDamage(spirit->GiveDamage() + 20);
            cout << "The risky attack failed." << endl;
            player->PlayerDead();
        }
    }
    if(spirit->GetHealth()==0&&player->GetHealth()==0)
    {
       cout<<"You saved your son but you died"<<endl;
    }
    else if(spirit->GetHealth()>0 || player->GetHealth()==0)
    {
        cout<<"You Lost. Try Again "<<endl;
        
    }
    else if(spirit->GetHealth()==0||player->GetHealth()>0)
    {
        cout<<"You won"<<endl;
    }
    
   cout<<"Current Health of Spirit and Player"<<endl;
   cout<<"Spirit->"<< spirit->GetHealth()<<endl;
   cout<<"Player->"<<player->GetHealth()<<endl;
    
  
    
    
    

     
   
}
