



#include <iostream>
using namespace std;


class Robot
{
  
 
   string name,task;
    public:
    
    Robot(string name1,string task1 )
    {
        name = name1;
        task = task1;
    }
   
   void Display()
   {
       cout<<"Name is "<<name<<endl;
       cout<<"Task is "<<task<<endl;
       
   }
   ~Robot()
   {
       cout<<"Robot DIed"<<endl;
   }
   
    
};

int main()
{
        Robot *robot = new Robot("lucky","Killem");
        
        robot->Display();
        
        delete robot;
        
        Robot *robot2 = new Robot("Assembling Parts","Assembling");
         Robot *robot3 = new Robot("Painting Cars","Painting");
          Robot *robot4 = new Robot("Inspecting Quality","Inspecting");
          
          
          robot2->Display();
          robot3->Display();
          
          robot4->Display();
          
          
          delete robot2;
          delete robot3;
        delete robot4;
        
   

    return 0;
}
