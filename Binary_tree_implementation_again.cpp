#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left, *right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};

int main(){
    // building the root node
    int node;
    cout<<"enter the root element: ";
    cin>>node;
    int first,second;
    queue<Node*> q;
    Node* root=new Node(node);
    q.push(root);

    // building the binary tree
    while (!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        cout<<"enter the left child of "<<temp->data;
        cin>>first;
        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left);
        }
        cout<<"enter the right child of "<<temp->data;
        cin>>second;
        if(second!=-1){
            temp->right=new Node(second);
            q.push(temp->right);
        }
    }
    
    return 0;
}