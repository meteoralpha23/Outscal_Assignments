
#include <iostream>

using namespace std;

int main()
{
    int wrench = 15;
    int hammer = 30;
    
    int *compartment1 = &wrench;
     int *compartment2 = &hammer;


   cout<<"Address of compartment1 is "<<compartment1<<endl;
    cout<<"Address of compartment2 is "<<compartment2<<endl;
    
     cout<<"value of compartment1 is (wrench) "<<*compartment1<<endl;
    cout<<"value of compartment2 is  (Hammer)"<<*compartment2<<endl;
    
    cout<<"swapping \n";
    
   
    int temp = *compartment1;
    *compartment1 = *compartment2;
    *compartment2 = temp;
    
    
    
    
    cout<<compartment1<<"  "<<*compartment1<<endl;
    cout<<compartment2<<"  "<<*compartment2<<endl;
    
    
    
    
    return 0;
}
