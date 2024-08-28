
#include <iostream>
using namespace std;
int main()
{
    int enemyHealth;
    
     
     cout<<"Enter Enemy Health "<<endl;
     cin>>enemyHealth;
    
    int *p = nullptr;
    int *q = nullptr;
    
    p = &enemyHealth;
    q= &enemyHealth;
    
    cout<<p<<endl;
    
    cout<<q<<endl;
    
    cout<<"Value stored at p"<<*p<<endl;
     cout<<"Value stored at q"<<*q<<endl;
     
     
     cout<<"Enter Enemy Health again"<<endl;
     cin>>enemyHealth;
     
      cout<<"Value stored at p"<<*p<<endl;
     cout<<"Value stored at q"<<*q<<endl;
     
     
  
    
}
