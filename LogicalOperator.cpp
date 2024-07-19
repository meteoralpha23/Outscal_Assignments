#include <iostream>
using namespace std;


int main()
{
  bool isPlayerRange, isPlayerAttacking, isPlayerDefending;
  int playerHealth;
  cout << "Enter Players Health :: " << endl;
  cin >> playerHealth;
  cout << "Is Player in Range ?\n(1 for yes 0 for no):" << endl;
  cin >> isPlayerRange;
  cout << "Is Player Attacking ?\n(1 for yes 0 for no):" << endl;
  cin >> isPlayerAttacking;
  cout << "Is Player Defending ?\n(1 for yes 0 for no):" << endl;
  cin >> isPlayerDefending;

  if (isPlayerRange && !isPlayerAttacking)
	{
	  cout << "Enemy Should Attack." << endl;
	}
  else if (isPlayerRange && isPlayerDefending)
	{
	  cout << "Enemy Should Hold." << endl;
	}
  else if (isPlayerRange && playerHealth < 20 && isPlayerAttacking)
	{
	  cout << "Player should deliver a rage attack." << endl;
	}
  else if (isPlayerRange && !isPlayerDefending
		   && (playerHealth == 100 || playerHealth < 10))
	{
	  cout << "Enemy should do a special ability attack." << endl;
	}






  return 0;
}
