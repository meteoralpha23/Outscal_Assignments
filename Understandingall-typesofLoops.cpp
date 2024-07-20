#include <iostream>
using namespace std;

void Shooting ()
{
  cout << "Player is shooting" << endl;

}

void Healing ()
{
  cout << "Player is healing" << endl;

}

void Attacking ()
{
  cout << "Player is Attacking" << endl;

}




int main ()
{

  cout << "For Loop " << endl;
  for (int i = 1; i <= 10; i++)
	{
	  Shooting ();
	}
  cout << "While Loop " << endl;
  int j = 0;
  while (j < 5)
	{
	  Healing ();
	  j++;
	}

  cout << "Do While Loop" << endl;

  int i = 0;
  do
	{
	  Attacking ();
	  i++;
	}

  while (i < 7);


  return 0;
}
