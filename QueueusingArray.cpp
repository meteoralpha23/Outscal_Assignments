#include <iostream>
using namespace std;

class Queue
{
    int data[10];
    int front;
    int end;
    
public:
    Queue()
    {
        front = 0;
        end = 0;
    }
    
    void push(int d)
    {
        if (end < 10) {
            data[end] = d; 
            end++; 
        } else {
            cout << "Queue is full" << endl;
        }
    }
    
    int Front()
    {
        if (front < end) {  
            return data[front]; 
        } else {
            cout << "Queue is empty!" << endl;
            return -1; 
        }
    }
    
    int Size()
    {
        return end - front; 
    }
    
    bool isEmpty()
    {
        return front == end; 
    }
};

int main()
{
    Queue *q = new Queue();
    q->push(10);
    q->push(20);
  
    cout << "Front Element -> " << q->Front() << "\n";
    cout << "Size of the Queue -> " << q->Size() << "\n";
  
    if (q->isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}
