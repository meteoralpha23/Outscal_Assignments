

#include <iostream>
using namespace std;

class NFSCar
{
    
    int engine;
    int doors;
    int capacity;
    int topSpeed;
    public:
    
   void SetEngineData(int setEngine)
   {
       engine = setEngine;
   }
   int GetEngineData()
   {
       return engine;
   }
   
   
   void SetDoorData(int setDoors)
   {
       doors = setDoors;
   }
   
   int GetDoors()
   {
       return doors;
   }
   
   
   void SetCapacity(int setCapacity)
   {
       capacity=setCapacity;
   }
   
   int GetCapacity()
   {
       return capacity;
   }
   
   void SetTopSpeed(int SettopSpeed)
   {
       topSpeed = SettopSpeed; 
   }
   int GetTopSpeed()
   {
       return topSpeed;
   }
   
   
   
   
   
   
    
    
  
    virtual void startVehicle() = 0;
    
    virtual void Accelarate()=0;
    
   virtual void CarCrashed() = 0;
   
    
   virtual  void StopVehicle() = 0;
  
    
    
};
class Subaru : public NFSCar
{
    public:
    Subaru()
    {
    SetEngineData(1);
    SetDoorData(3);
    SetCapacity(54);
    SetTopSpeed(600);
    }
    
 void   startVehicle()
    {
        cout<<"Subaru Started"<<endl;
    }
    
 void   Accelarate()
    {
        cout<<"Accelarating subaru"<<endl;
    }
    
 void   CarCrashed()
    {
        cout<<"Subaru Crashed"<<endl;
    }
    
    
  void  StopVehicle()
    {
        cout<<"Subaru Started"<<endl;
    }

};

class BMW : public NFSCar
{ public:
     BMW()
     {
    SetEngineData(2);
    SetDoorData(87);
    SetCapacity(18);
    SetTopSpeed(844);
     }
    
    
   void startVehicle()
    {
        cout<<"BMW Started"<<endl;
    }
    
 void   Accelarate()
    {
        cout<<"BMW subaru"<<endl;
    }
    
 void   CarCrashed()
    {
        cout<<"BMW Crashed"<<endl;
    }
    
    
  void  StopVehicle()
    {
        cout<<"BMW Started"<<endl;
    }
    
};



int main()
{
    Subaru *subaru = new Subaru();
    subaru->startVehicle();
    cout<<subaru->GetEngineData()<<endl;
    cout<<subaru->GetTopSpeed()<<endl;
    cout<<subaru->GetCapacity()<<endl;
    cout<<subaru->GetDoors()<<endl;
    subaru->Accelarate();
    subaru->CarCrashed();
    subaru->StopVehicle();
    
    
     BMW *bmw = new BMW();
    bmw->startVehicle();
    cout<<bmw->GetEngineData()<<endl;
    cout<<bmw->GetTopSpeed()<<endl;
    cout<<bmw->GetCapacity()<<endl;
    cout<<bmw->GetDoors()<<endl;
    bmw->Accelarate();
    bmw->CarCrashed();
    bmw->StopVehicle();
    

    return 0;
}
