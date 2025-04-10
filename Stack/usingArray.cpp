//in stack we can do the foloowing operations 
// 1. push, 2. pop, 3. peek, 4. isEmpty, 5. size
// 6. display, 7. clear, 8. isFull, 9. search, 10. reverse
// 11. sort, 12. swap, 13. copy, 14. merge, 15. split
// 16. rotate, 17. insert, 18. delete, 19. traverse, 20. destroy
//three ways to create stack: array, list & STL

#include<iostream>
using namespace std;

class stack
{
    private:
        int top;
        int* array;
        int capacity;

    public:
    stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }
    void push(int value)
    {
        if (top == capacity - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        array[++top] = value;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        cout<<"popped element is:" <<array[top--]<<endl;
    }
   
    void peek()                              // Returns the top element of the stack without removing it
    {
        if(top==-1)
        {
            cout<<"Stack is empty" <<endl;
            return -1;
        }
        return arr[top];
    }
    void empty()                             // Checks if the stack is empty
    {
        return (top == -1);
    }
    void display()
    {
        for (int i-top; i >= 0; i--) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    stack s(5);                             // Create a stack of size 5
    s.push(10);                             // Push elements onto the stack
    s.push(20);
    s.push(30);
    s.display();                            // Display the stack

    cout << "Top element is: " << s.peek() << endl; // Peek at the top element

    s.pop();                                // Pop an element from the stack
    s.display();                            // Display the stack after popping

    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl; // Check if the stack is empty

    return 0;
}
