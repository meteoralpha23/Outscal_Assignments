
#include <iostream>
using namespace std;


int main()
{
    int size;
    int numtoremove;
    std::cout << "Please enter the size of an array" << std::endl;
    cin>>size;
    
    int arr[size];
    
    cout<<"Enter Array"<<endl;
    
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the element you want to delete"<<endl;
    cin>>numtoremove;
    
    int indextoremove = -1;
    if(indextoremove!=-1)
    {
    for(int i=0;i<size;i++)
    {
        if(arr[i]==numtoremove)
        {
            indextoremove = i;
            break;
        }
       
    }
    
    for(int i  = indextoremove; i<size; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
    
    cout<<"Updatd array after removal" <<endl;
    
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    }
    else
    {
        cout<<"Number not found"<<endl;
    }
    
   
    return 0;
}
