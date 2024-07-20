
#include <iostream>
using namespace std;

int main()
{
     int num=0;
     int sum=0;
     cout<<"Please enter the natural number"<<endl;
     cin>>num;
     int i=0;
     do
     {
         sum=sum+i;
        
         i++;
         
     }
     
     while(i<=num);
     
     
     cout<<"Sum of first"<<num<<"natural number is = "<<sum<<endl;
     

    return 0;
}
