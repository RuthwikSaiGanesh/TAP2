//9. Write a program to check list is circular or not, if not then make it circular double linked list.

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int value) {
            data = value;
            next = nullptr;
        }
};

class SinglyLinkedList
{
    private:
        Node* head;
    public:
        SinglyLinkedList() 
        {
            head = nullptr;
        }
        void insertEnd(int value) 
        {
            Node* newNode = new Node(value);
            if (head == nullptr) {
                head = newNode;
                return;
            }
            Node* temp = head;
            while (temp->next != nullptr && temp->next != head) {  
                temp = temp->next;
            }
            temp->next = newNode;
        }  

        bool isCircular() 
        {
            if (head == nullptr) {
                return false; // Empty list is not circular
            }
            Node* temp = head->next; // Start from the second node
            while (temp->next != nullptr && temp->next != head) {  
                temp = temp->next;
            }
            return (temp == head); // If we reach back to head, it's circular
        }

        void makeCircular()
        {
            if(head==nullptr)
        {
            return ;
        }
            Node* temp = head;
            while (temp->next != nullptr && temp->next != head) {  
                temp = temp->next;
            }
        }
};

int main() {
    SinglyLinkedList sil;
    sil.insertEnd(1);
    sil.insertEnd(2);
    sil.insertEnd(3);
    sil.insertEnd(4);

    if (sil.isCircular()) {
        cout << "The list is circular." << endl;
    } else {
        cout << "The list is not circular." << endl;

        sil.makeCircular(); //
        cout << "Now it is a circular linked list" << endl;
    }

    return 0;
}