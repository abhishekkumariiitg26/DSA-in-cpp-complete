#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left, *right;
    Node(int value){
        this->data=value;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* Build_Binary_Tree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node* temp=new Node(x);
    cout<<"Enter the left node of "<<x<<": ";
    temp->left=Build_Binary_Tree();
    cout<<"Enter the right node of "<<x<<": ";
    temp->right=Build_Binary_Tree();
    return temp;

}

int height_of_bt(Node* root){
    if(root==NULL){
        return 0;
    }
    int left=height_of_bt(root->left);
    int right=height_of_bt(root->right);
    int height=max(left,right)+1;
    return height;

}



int main(){
    cout<<"Enter the root node: ";
    Node* root=Build_Binary_Tree();
    cout<<"The height of binary tree is: "<<height_of_bt(root);
    return 0;
}