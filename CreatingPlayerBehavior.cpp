

#include <iostream>
using namespace std;

int health = 100, attack = 20, defense = 30, healingPower = 10;

int TakeDamage (int damageToInflict)
{
  if (health > 0)
	{
	  health -= damageToInflict;
	}
  else
	{
	  cout << "Sorry Player is Dead." << endl;

	  return 0;

	}

  return health;
}

int Heal (int healtToRecover)
{
  if (health > 0)
	{
	  health += healtToRecover;
	}
  else
	{
	  cout << "Health is already full" << endl;
	}

  return health;
}

float
DamageMultiplier (float multiplier)
{
  attack *= multiplier;
  return attack;
}




int main ()
{



  cout << "Player Status at starting\n";

  cout << "Health---->" << health << endl;
  cout << "Attack---->" << attack << endl;
  cout << "Defense---->" << defense << endl;
  cout << "HealingPower---->" << healingPower << endl;

  cout << endl;

  cout << "New Status is \n" << endl;


  cout << "After attacking and giving 40 damage new health is-----> " <<
	TakeDamage (40) << endl;
  cout <<
	"After healing by increasing healing power by 10 health, New health is----->"
	<< Heal (10) << endl;
  cout << "Increasing attack by 0.5 new attack power is ----->" <<
	DamageMultiplier (0.5) << endl;



  return 0;
}
