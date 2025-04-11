//sorting the stack using stack

#include <iostream>
#include <stack>
using namespace std;

void sortStack(stack<int> &s) {
    stack<int> tempStack;
    while (!s.empty()) {
        int temp = s.top();
        s.pop();

        while (!tempStack.empty() && tempStack.top() > temp) {
            s.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(temp);
    }

    // Transfer sorted elements back to the original stack
    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

int main() {
    stack<int> s;
    s.push(34);
    s.push(3);
    s.push(31);
    s.push(98);
    s.push(92);
    s.push(23);

    cout << "Original stack: ";
    stack<int> temp = s; // Create a temporary copy for display
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    sortStack(s);

    cout << "Sorted stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}