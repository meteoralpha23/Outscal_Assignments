

#include <iostream>
using namespace std;

int main()
{
    int playerHealth;
    
    cout<<"Enter player Health"<<endl;
    cin>>playerHealth;
    
    int *p = &playerHealth;
    cout<<"Value of P is"<<p<<endl;
    
    cout<<"Value stored at p is "<<*p<<endl;
    
    cout<<"Value stored directly at player health is"<<playerHealth<<endl;
    
    
    cout<<"Enter Player health again"<<endl;
    
    cin>>*p;
    
     cout<<"Value stored at p is "<<*p<<endl;
    
    cout<<"Value stored directly at player health is"<<playerHealth<<endl;
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}
