
#include <iostream>
#include<string>
#include <cstdlib>

using namespace std;
int main()
{
    
   string A="A";
   string B="B";
   int scoreA=10;
   int scoreB=20;
    int sum =0;
    
    string currentChar="";
    string previousChar="";
    
    int currentStreak =0;
   
   int x = time(0);
   
   string result = "";
   srand(x);
   
   int length = rand()%10+1;
   
   for(int i =0; i<length;i++)
   {
     
     
      currentChar =(rand()%2==0)?A:B;
     result = result+ currentChar;
     
    int baseScore=0;
    
    if(currentChar==A)
    {
        baseScore =scoreA;
    }
    else
    {
        baseScore =scoreB;
    }
     
     if(currentChar==previousChar)
     {
         currentStreak++;
     }
     else
     
     {
         currentStreak=1;
     }
     
     
       previousChar =currentChar;
       
       sum = sum + baseScore*currentStreak;
      
       
      
   }
   cout<<"Randomly Generated string is -> "<<result<<endl;
   cout<<sum;
   


   
   
   
   
   
   
}
