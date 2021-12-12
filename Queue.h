#include "Node.cpp"

class Queue {
    int size;
    int Front;//front pointer
    int Rear;//rear pointer
    Node** Q; //Pointer to tree node
public:
    Queue() {}
    Queue(int s) {
        size = s;
        Q = new Node * [size];//allocate memory for Queue
        Front = Rear = -1;//initialize both pointers to -1
    }
    ~Queue() {
        delete[] Q;
    }
    //Member functions


    bool isFull() {
        if (Rear == size - 1)//queue is full
            return true;
        else
            return false;
    }

    void enqueue(Node* tmp) {
        if (!isFull()) {
            Rear = Rear + 1;//increment Rear
            Q[Rear] = tmp;//Assign key value
        }
        else //queue is full
            cout << "\nQueue overflow\n";
    }

    bool isEmpty() {
        if (Front == Rear)
            return true;
        else
            return false;
    }

    Node* dequeue() {
        Node* x = NULL;
        if (!isEmpty()) {
            Front = Front + 1;
            x = Q[Front];
        }
        else {
            cout << "\nQueue underflow" << std::endl;
        }
        return x;
    }

    void Display() {
        if (isEmpty()) {
            cout << "\nQueue is empty";
            return;
        }

        for (int i = Front + 1; i <= Rear; i++)
            cout << Q[i] << " ";
    }
};

