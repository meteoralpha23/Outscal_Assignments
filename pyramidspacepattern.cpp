
#include <iostream>
using namespace std;


int main()
{
   int n=4;
   
   for(int i = 1; i<=4;i++)
   {
       for(int j = i; j <n; j++)
       {
           cout<<" ";
       }
       
     for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
       cout<<endl;
   }
}
