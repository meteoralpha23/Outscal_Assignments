#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* nextNode;
    
    Node(int x)
    {
        data = x;
        nextNode = nullptr;  
    }
};

class Stack
{
    private:
    Node* topNode;  
    
    public:
    Stack()
    {
        topNode = nullptr;  
    }
    
    void push(int x)
    {
        Node* newNode = new Node(x);
        newNode->nextNode = topNode;  
        topNode = newNode;
    }
    
    void pop()
    {
        if(isEmpty())
        {
            cout << "Stack Empty" << endl;
            return;
        }
        Node* temp = topNode;
        topNode = topNode->nextNode;
        delete temp;
    }

    bool isEmpty() {
        return topNode == nullptr;
    }
    
    int getTop()
    {
        if(isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return topNode->data;
    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};



int main()
{
    Stack stack;
    
    stack.push(11);
    stack.push(51);
    stack.push(42);
    cout << "Top element: " << stack.getTop() << endl; 
    stack.pop();
    cout << "Top element after pop: " << stack.getTop() << endl; 
    cout << "Ismy stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl; 
    stack.pop();
    stack.pop();
    cout << "Is my stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl; 
    
    return 0;
}
