#include<iostream>
using namespace std;

class Node 
{
    int data;
    Node* next;
    public:
        Node(int value)                 // Constructor to initialize the node
        {
            data = value;
            next = nullptr;
        }
};
/*  constructor : It is a special member function, it has no return type...not even void. 
Class name and functioin name are same.
When you create object of a class, constructor is called automatically.     */

class LinkedList {

private:
    Node *head;                                 // Pointer to the head of the list

public:
    LinkedList() {                              // Constructor to initialize the head to nullptr
        head = nullptr;
    }
    
    void insertEnd(int value) {                     // Function to insert a new node at the end of the list
        Node* newNode = new Node(value);       // Create a new node
        if (head == nullptr) {                  // If the list is empty, set head to the new node
            head = newNode;
            return;
        }
        Node* temp = head;                      // Traverse to the end of the list
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;                   // Link the last node to the new node
    }
    void display()
    {
        Node* temp=head;
        while(temp!=nullptr)                   // Traverse the list and print each node's data
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
void insertAtBeginning(int value) { // Function to insert a new node at the beginning of the list
    Node* newNode = new Node(value);       // Create a new node
    newNode->next = head;             // Link the new node to the current head
    head = newNode;                   // Update head to point to the new node
}
void insertAtPosition(int value, int position)       // Function to insert a new node at a specific position in the list
{ 
   if(position ==1)
   {
    insertAtBeginning(value);
    return;
   }
   Node* newNode = new Node(value);       // Create a new node
   Node* temp = head;                     // Traverse to the position where the new node will be inserted
   for(int i=1;i<position-1 && temp!=nullptr;i++)
   {
       temp=temp->next;
   }
   if(temp == nullptr)
   {
    cout<<"Position out of range"<<endl;
    return;
   }
   newNode->next = temp->next;           // Link the new node to the next node
   temp->next = newNode;                 // Link the previous node to the new node

}

void reverseLinkedList()
{
    Node* prev = nullptr;                // Initialize previous pointer to nullptr
    Node* current = head;                 // Start with the head of the list
    Node* next = nullptr;                 // Initialize next pointer to nullptr

    while (current != nullptr) {           // Traverse the list
        next = current->next;              // Store the next node
        current->next = prev;              // Reverse the link
        prev = current;                    // Move prev and current one step forward
        current = next;
    }
    head = prev;                          // Update head to point to the new first node
}
void deleteAtBeginning() {                // Function to delete the first node of the list
    if (head == nullptr) 
    {                // If the list is empty, do nothing
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;                    // Store the current head
    head = head->next;                    // Update head to point to the next node
    temp->next = nullptr;             // Set the next pointer of the old head to nullptr
    delete temp;                          // Delete the old head node
}
void deleteAtEnd() {                      // Function to delete the last node of the list
    if (head == nullptr) {                // If the list is empty, do nothing
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == nullptr) {          // If there is only one node in the list
        delete head;                      // Delete the head node
        head = nullptr;                   // Set head to nullptr
        return;
    }
    Node* temp = head;                    // Traverse to the second last node
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;                    // Delete the last node
    temp->next = nullptr;                 // Set the next pointer of the second last node to nullptr
}
void deleteAtPosition(int position) {       // Function to delete a node at a specific position in the list
    if (head == nullptr) {                    // If the list is empty, do nothing
        return;
    }
    if (position == 1) {                      // If the first node is to be deleted
        deleteAtBeginning();
        return;
    }
    Node* temp = head;                        // Traverse to the node before the one to be deleted
    for (int i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr) { // If position is out of range, do nothing
        cout << "Position out of range" << endl;
        return;
    }
    Node* nodeToDelete = temp->next;         // Store the node to be deleted
    temp->next = nodeToDelete->next;         // Link the previous node to the next node of the one to be deleted
    delete nodeToDelete;                     // Delete the node
}

int main()
{
    LinkedList list;                       // Create a new linked list
    list.insertEnd(10);                    // Insert nodes at the end of the list
    list.insertEnd(20);
    list.insertEnd(30);
    list.display();                        // Display the list

    list.insertAtBeginning(5);             // Insert a node at the beginning of the list
    list.display();                        // Display the list

    list.insertAtPosition(15, 2);          // Insert a node at position 2
    list.display();                        // Display the list

    list.reverseLinkedList();              // Reverse the linked list
    list.display();                        // Display the reversed list

    list.deleteAtBeginning();               // Delete the first node
    list.display();                        // Display the list

    list.deleteAtEnd();                     // Delete the last node
    list.display();                        // Display the list

    return 0;
}