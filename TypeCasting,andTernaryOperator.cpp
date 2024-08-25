

#include <iostream>
using namespace std;

int main()
{
    
    /*
    
    cout<<"Implicit Type Casting"<<endl;
    int playerHealth=100;
    
    short playerCode = playerHealth;
    
    cout<<"Size of Player Health->"<<sizeof(playerHealth)<<endl;
    cout<<"Size of Player Code->"<<sizeof(playerCode)<<endl;
    
    cout<<"Player Health is "<<playerHealth<<endl;
     cout<<"Player Code is "<<playerCode<<endl;
     
     */
     
 
    /*
     cout<<"Explicit Type Casting"<<endl;
     
     int playerHealth=100;
     
     float playerHealthFractional = (float)playerHealth/2.6;
     
    cout<<"Size of Player Health->"<<sizeof(playerHealth)<<endl;
    cout<<"Size of playerHealthFractional->"<<sizeof(playerHealthFractional)<<endl;
    cout<<"Player Health is "<<playerHealth<<endl;
    cout<<"playerHealthFractional is "<<playerHealthFractional<<endl;
    */
     
   
     
     int playerHealth;
     int playerCode = 5;
     
     cout<<"Enter Player Health"<<endl;
     cin>>playerHealth;
     
   string output =   (playerHealth==playerCode)?"true":"false";
   
   cout<<output;
     
     
    
    
    

    return 0;
}
