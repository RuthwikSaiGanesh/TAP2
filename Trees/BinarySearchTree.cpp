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
class BST
{
    public:
    Node* insert(Node* root, int value)
    {
        if(root == nullptr)
        {
            return new Node(value); 
        }
        if(value < root->data)
        {
            root->left = insert(root->left, value); 
        }
        else if(value > root->data)
        {
            root->right = insert(root->right, value); 
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

    Node* Search(Node* root, int key)
    {
        if(root == nullptr)
        {
            return root;
        }
        if(root->data == key)
        {
            return root;
        }
        else if(key<root->data)
        {
            return Search(root->left , key);
        }
        else 
        {
            return Search(root->right , key);
        }
        
    }
    Node* findMin(Node* root)
    {while(root && root->left !=nullptr)
        {
            root = root->left; 
        }
        return root; 
    }


    Node* deleteNode(Node* root, int val)
    {
        if(root == nullptr)
        {
            return root;
        }
        if(val < root->data)
        {
            root->left = deleteNode(root->left, val); 
        }
        else if(val > root->data)
        {
            root->right = deleteNode(root->right, val); 
        }
        else
        {
            if(root->left ==nullptr && root->right == nullptr)
            {
                delete root;
                return nullptr;
            }
            else if(root->left == nullptr)
            {
                Node* temp = root->right;
                delete root;
                return temp;
            }
            else if(root->right == nullptr)
            {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            else{
                Node* successor = findMin(root->right);
                root->data = successor->data;
                root->right = deleteNode(root->right, successor->data);
            }
        }
        return root;
    }
};
int main()
{
    BST tree;
    int key;
    Node* root = nullptr;
    root = tree.insert(root, 50);
    root = tree.insert(root, 30);
    root = tree.insert(root, 20);
    root = tree.insert(root, 40);
    root = tree.insert(root, 70);
    root = tree.insert(root, 60);
    root = tree.insert(root, 80);
    cout<<"Inorder: ";
    tree.inorder(root);
    cout<<endl; 
    cout<<"Enter the key to search: ";
    cin>>key;
    Node* res = tree.Search(root, key);
    if(res == nullptr)
    {
        cout<<"No Element like that to find"<<endl;
    }
    else
    {
        cout<<"Element Found"<<res->data<<endl;
    }
    cout<<"Enter the key to delete: ";
    cin>>key;
    root = tree.deleteNode(root, key);
    
    return 0;
}
