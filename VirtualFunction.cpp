



#include <iostream>
using namespace std;

class Weapon
{  public:
    virtual void Attack() {
        cout<<"Weapon performed attack."<<endl;
        
    }
    
    void Info()
    {
        cout<<"Weapon is ultimate"<<endl;
    }
};

class RangedWeapon : public Weapon{
    
    
    public:
    
  void Attack()
  {
      cout<<"Performing ranged attack."<<endl;
  }
  
  void Info()
  {
      cout<<"displaying ranged weapon info "<<endl;
  }
};

int main()
{
   Weapon *weapon;
   
   RangedWeapon rangedWeapon;
   
   weapon = &rangedWeapon;
   
   weapon->Attack();
   weapon->Info();

    return 0;
}
