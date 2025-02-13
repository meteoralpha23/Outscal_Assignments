#include <iostream>
using namespace std;

class Stack
{
private:
    int data[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int d)
    {
        if (top == 99)
        {
            cout << "Error: Stack full" << endl;
            return;
        }
        top++;
        data[top] = d;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty, pop not allowed" << endl;
            return -100000;
        }

        int val = data[top];
        top--;
        return val;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty, peek not allowed" << endl;
            return -10000;
        }
        return data[top];
    }

    void print()
    {
        cout << "----stack----" << "\n";
        for (int i = top; i >= 0; i--)
        {
            cout << data[i] << endl;
        }
        cout << "----End-----" << endl;
    }

    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    Stack* stack = new Stack();
    stack->push(10);
    stack->push(20);
    stack->push(30);
    stack->push(40);
    stack->push(50);

    cout << "peek " << stack->peek() << "\n";
    cout << "Pop " << stack->pop() << "\n";

    stack->print();

    if (stack->isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    delete stack;
    return 0;
}
