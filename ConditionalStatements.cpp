
#include <iostream>
using namespace std;

int main ()
{
  int playerHealth, enemyHealth;
  cout << "Enter Player Health (Enter between 0 ,50 or 100)" << endl;
  cin >> playerHealth;
  cout << "Enter Enemy Health(Enter between 0 ,50 or 100)" << endl;
  cin >> enemyHealth;
  if (playerHealth==100)
  {
      cout<<"Player Health is full"<<endl;
  }
  else if(playerHealth==50)
  {
      cout<<"Player Health is half"<<endl;
  }
  else if(playerHealth==0)
  {
      cout<<"Player is Dead"<<endl;
      
  }
  
  if(playerHealth>0)
  {
      if(enemyHealth==100)
      {
          cout<<"Enemy Health is full"<<endl;
      }
      else if(enemyHealth==50)
      {
        cout<<"Enemy Health is half"<<endl;
      }
      else if(enemyHealth==0)
      {
          cout<<"Enemy Health is zero"<<endl;
      }
  }
  else if(playerHealth==0 || enemyHealth==0)
  {
     if(playerHealth==0)
     {
         cout<<"Enemy Won"<<endl;
     }
     else
     {
         cout<<"Player won"<<endl;
     }
     
  }
  else if(playerHealth==0 && enemyHealth==0)
  {
      cout<<"Game Over..... It's a draw"<<endl;
  }


	}
