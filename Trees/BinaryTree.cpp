#include<iostream>
using namespace std;

class Node 
{
    int data;
    Node* child1;
    Node* child2;
    Node* child3;

    Node(int value)
    {
        data=value;
        child1 = child2 = child3 = nullptr; 
    }
};

void printTree(Node* root, int depth =0)
{
    if(root == nullptr)
    {
        return;
    }
    for(int i=0;i<depth;i++)
    {
        cout<<"  "; 
    }
    cout<<root->data<<endl; 
    printTree(root->child1, depth + 1); 
    printTree(root->child2, depth + 1);
    printTree(root->child3, depth + 1);
}