#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right; 

    Node(int value)
    {
        data = value;
        left = right = nullptr; 
    }
};
void preorder(Node* root)
    {
        if(root == nullptr)
        {
            return;
        }
        cout<<root->data<<" "; 
        preorder(root->left); 
        preorder(root->right); 
    }
    void inorder(Node* root)
    {
        if(root == nullptr)
        {
            return;
        }
        inorder(root->left); 
        cout<<root->data<<" "; 
        inorder(root->right); 
    }
    void postorder(Node* root)
    {
        if(root == nullptr)
        {
            return;
        }
        postorder(root->left); 
        postorder(root->right); 
        cout<<root->data<<" "; 
    }

//inorder traversal is a DFS trvaersal


int main()
{
    Node* root = new Node(1); 
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->left->left = new Node(4); 
    root->left->right = new Node(5); 
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<"Preorder Traversal: "; 
    preorder(root); 
    cout<<endl; 

    cout<<"Inorder Traversal: "; 
    inorder(root); 
    cout<<endl; 

    cout<<"Postorder Traversal: "; 
    postorder(root); 
    cout<<endl; 

    return 0;
}