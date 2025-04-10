/*   Q6.count nodes in the list
	 Q7.find middle element of the linked list
	 Q8.remove duplicates from sorted linked list   */


     #include<iostream>
     using namespace std;
     
     class Node {
     public:
         int data;
         Node* next;
         Node* prev; 
     
         Node(int value) {
             data = value;
             next = nullptr;
             prev = nullptr; 
         }
     };
     
     class DoublyLinkedList{
         private:
             Node * head; 
             Node * tail;
     
         public: 
         DoublyLinkedList()
         {
             head = nullptr; 
             tail = nullptr; 
         }
         void insertAtBeginning(int value)
         {
             Node * newNode =new Node(value);
             if(head == nullptr)
             {
                 head = tail = newNode;
             }
             else
             {
                 newNode->next = head; 
                 head->prev = newNode; 
                 head = newNode; 
             }
         }
         void insertAtEnd(int value)
         {
             Node * newNode = new Node(value);
             if(head == nullptr)
             {
                 head = tail = newNode; 
             }
             else
             {
                 tail->next = newNode; 
                 newNode->prev = tail; 
                 tail = newNode; 
             }
         }   
         void displayNodes()
         {
             Node * temp=head;
             while(temp!=nullptr)
             {
                 cout<<temp->data<<" ";
                 temp= temp->next;
             }
             cout<<endl;
         }
         int CountNodes()
         {
             int count = 0;
             Node* temp = head; 
             while(temp != nullptr) 
             {
                 count++; 
                 temp = temp->next; 
             }
             return count; 
         }

         int findMiddleElement()
         {
            if(head == nullptr)
            {
                return -1;
            }
            Node* slow = head;
            Node* fast = head;
            while(fast != nullptr && fast->next != nullptr)
            {
                slow = slow->next; 
                fast = fast->next->next; 
            }
            return slow->data;

         }
         int RemoveDuplicate()
         {
                if(head == nullptr)
                {
                    return -1;
                }
                Node* current = head; 
                while(current != nullptr && current->next != nullptr)
                {
                    if(current->data == current->next->data) 
                    {
                        Node* temp = current->next; 
                        current->next = temp->next; 
                        if(temp->next != nullptr) 
                        {
                            temp->next->prev = current; 
                        }
                        delete temp; 
                    }
                    else
                    {
                        current = current->next; 
                    }
                }
         }
     };
      int main()
      {
         DoublyLinkedList dil; 
         dil.insertAtBeginning(10); 
         dil.insertAtBeginning(20); 
         dil.insertAtBeginning(30);
         dil.insertAtEnd(10); 
         dil.insertAtEnd(30);
         dil.insertAtEnd(40);
         dil.insertAtEnd(50);
         dil.displayNodes();
         cout<<"Numer of Nodes:"<<dil.CountNodes()<<endl;
         cout<<dil.findMiddleElement()<<endl;
       
        
         
      }
    