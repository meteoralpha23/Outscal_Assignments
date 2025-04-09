
#include <iostream>
using namespace std;






int Partition(int arr[],int s, int e)
{
    
    
    int pivot = arr[s];
    
    int count = 0;
    
    for(int i=s+1;i<=e;i++)
    {
       if(arr[i]<pivot)
        count++;
    }
    
    int pivotIndex = s + count;
    
    swap(arr[pivotIndex],arr[s]);
    
    
    int i =s;
    int j = e;
    
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    
    
    return pivotIndex;
}



void QuickSort(int arr[],int s,int e)
{
    
   
   if(s>=e)
   {
       return;
   }
   
   int p = Partition(arr,s,e);
   
   
   
   QuickSort(arr,s,p-1);
   QuickSort(arr,p+1,e);
    
    
    
}

int main()
{
       int arr[8] = {2,1,4,6,8,8,8,8};
    
    int n =8;
    
    QuickSort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        
        cout<<arr[i]<<endl;
    }

    return 0;
}
