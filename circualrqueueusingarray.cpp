#include <iostream>
using namespace std;

class CircularArrayQueue {
protected:
    int a[4];
    int rear;
    int front;
    int n;

public:
    CircularArrayQueue(int n) {  // Fixed constructor name
        this->n = n;
        front = -1;
        rear = -1;
    }

    void Enqueue(int data) {
        if ((rear + 1) % n == front) {
            cout << "Queue is full" << endl;
            return; // Prevent further execution if full
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % n;
        a[rear] = data;
    }

    int dequeue() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return -1; // Return a sentinel value when queue is empty
        }
        int result = a[front];
        if (front == rear) {
            front = rear = -1; // Reset queue when empty
        } else {
            front = (front + 1) % n;
        }
        return result;
    }

    int getFront() {
        if (front == -1) { // Check if queue is empty
            cout << "Queue is empty" << endl;
            return -1; // Return sentinel value for empty queue
        }
        return a[front]; // Return the actual front element
    }

    void printQueue() { // Function to print the queue
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << a[i] << " ";
            if (i == rear) break;
            i = (i + 1) % n;
        }
        cout << endl;
    }
};

int main() {
    CircularArrayQueue *q1 = new CircularArrayQueue(4);

    q1->Enqueue(6);
    q1->Enqueue(7);
    q1->Enqueue(8);
    q1->Enqueue(9);

    q1->printQueue(); 

    cout << "Dequeued " << q1->dequeue() << endl;
    cout << "Front element is " << q1->getFront() << endl;
     q1->Enqueue(10);

    q1->printQueue();

    delete q1; 

    return 0;
}
