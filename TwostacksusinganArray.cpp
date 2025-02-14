#include <iostream>
using namespace std;

class TwoStacks
{
private:
    int* arr;
    int top1, top2;
    int size;

public:
    TwoStacks(int n)
    {
        size = n;
        arr = new int[n];  
        top1 = -1;  
        top2 = size;  
    }

    ~TwoStacks()
    {
        delete[] arr;  
    }

    void push1(int x)
    {
        if (top1 < top2 - 1)  
        {
            arr[++top1] = x;  
        }
        else
        {
            cout << "Stack1 Overflow" << endl;
        }
    }

    void push2(int x)
    {
        if (top1 < top2 - 1)  
        {
            arr[--top2] = x;  
        }
        else
        {
            cout << "Stack2 Overflow" << endl;
        }
    }

    int pop1()
    {
        if (top1 >= 0)  
        {
            return arr[top1--];  
        }
        else
        {
            cout << "Stack1 Underflow" << endl;
            return -1;
        }
    }

    int pop2()
    {
        if (top2 < size)  
        {
            return arr[top2++];  
        }
        else
        {
            cout << "Stack2 Underflow" << endl;
            return -1;
        }
    }

    int getTop1()
    {
        if (top1 >= 0)
        {
            return arr[top1];  
        }
        else
        {
            cout << "Stack1 is empty" << endl;
            return -1;
        }
    }

    int getTop2()
    {
        if (top2 < size)
        {
            return arr[top2];  
        }
        else
        {
            cout << "Stack2 is empty" << endl;
            return -1;
        }
    }
};

int main()
{
    TwoStacks ts(10);  

    ts.push1(5);
    ts.push1(10);
    ts.push1(15);

    ts.push2(20);
    ts.push2(25);
    ts.push2(30);

    cout << "Top of Stack1: " << ts.getTop1() << endl;
    cout << "Top of Stack2: " << ts.getTop2() << endl;

    cout << "Popped from Stack1: " << ts.pop1() << endl;
    cout << "Popped from Stack2: " << ts.pop2() << endl;

    return 0;
}
