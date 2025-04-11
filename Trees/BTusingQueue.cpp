#include<iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data =value;
        left = right = nullptr;
    }       
};

Node *buildTree()
{
    int value;
    cout<<"enter root value( -1 for null):";
    cin>>value;
    if(value == -1)
    {
        return nullptr;
    }
    Node* root = new Node(value);
    queue<Node*> q;
    q.push(root);               // Enqueue the root node
    while(!q.empty())
    {
        Node* current =q.front();
        q.pop();

        int leftValue, rightValue;
        cout<<"enter left child of "<<current->data<<"[ -1 for NULL]: ";
        cin>>leftValue;
        if(leftValue != -1)
        {
            current->left = new Node(leftValue);
            q.push(current->left);               // Enqueue left child
        }
        cout<<"enter right child of "<<current->data<<"[ -1 for NULL]: ";
        cin>>rightValue;
        if(rightValue != -1)
        {
            current->right = new Node(rightValue);
            q.push(current->right);              // Enqueue right child
        }
    } 
    return root;
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
int main()
{
    Node* root = buildTree(); 
    cout<<"Inorder Traversal: "; 
    inorder(root); 
    cout<<endl;
    cout<<"Preorder Traversal: "; 
    preorder(root); 
    cout<<endl;
    cout<<"Postorder Traversal: "; 
    postorder(root); 
    cout<<endl;
    return 0;
}
