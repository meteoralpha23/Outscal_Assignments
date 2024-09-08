

#include <iostream>
using namespace std;

template <typename T>
class SpecialAbility
{
    T attackStrength;
    public:
    
    SpecialAbility(T value)
    {
        attackStrength = value;
    }
    
    T performSpecialAbility()
    {
        return attackStrength;
    }
    
};


int main()
{
    SpecialAbility<int> obj1(34);
     SpecialAbility<float> obj2(1.5);
     
     cout<<obj1.performSpecialAbility()<<endl;
       cout<<obj2.performSpecialAbility()<<endl;
     
    

   
    
}
