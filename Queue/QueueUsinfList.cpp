#include<iostream>
using namespace std;

class nodes
{
    int data;
    Node* front;
    Node
    Node(int value)
    {
        data = value;
        front = nullptr;
        rear = nullptr;
    }
}
class QueueUsingList
{
    private:
        Node* front;
        Node* rear;
    public:
        QueueUsingList()
        {
            front = nullptr;
            rear = nullptr;
        }
        void enqueue(int value)
        {
            Node* newNode =new Node(value);
            if(rear == nullptr)
            {
                front = rear = newNode;
                return;
            }
            rear->next = newNode;
            rear = newNode;
        }

        void dequeue()
        {
            if(front == nullptr)
            {
                cout << "Queue is empty" << endl;
                return;
            }
            Node *temp =front;
            front = front->next; 
            if(front==nullptr)
            {
                rear =nullptr;
            }
            delete temp;
        }

        void display()
        {
            if(front == nullptr)
            {
                cout << "Queue is empty" << endl;
                return;
            }
            Node* temp = front;
            while(temp!=nullptr)
            {
                cout << temp->data << " ";
                temp = temp ->next;
            }
        }
        int peek()
        {
            if(front ==nullptr)
            {
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            return front->data;
        }
        bool isEmpty()
        {
            return front ==nullptr;
        }
    
};

int main()
{
    QueueUsingList q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Queue elements: ";
    q.display();
    cout << endl;
    cout << "Front element: " << q.peek() << endl;
    q.dequeue();
    cout << "Queue after dequeue: ";
    q.display();
    cout << endl;
    return 0;
}

