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
    cout<<"Enter the left node of "<<x<<" : ";
    temp->left=Build_Binary_Tree();
    cout<<"Enter the right node of "<<x<<" : ";
    temp->right=Build_Binary_Tree();
    return temp;

}

void count_leaf_nodes_using_inorder_traversal(Node* root,int &count){
    if(root==NULL){
        return ;
    }
    count_leaf_nodes_using_inorder_traversal(root->left,count);
    if(root->left==NULL && root->right==NULL){
        count++;
    }
    count_leaf_nodes_using_inorder_traversal(root->right,count);

}

int main(){
    int count=0;
    cout<<"Enter the root node : ";
    Node* root=Build_Binary_Tree();
    count_leaf_nodes_using_inorder_traversal(root,count);
    cout<<"The number of leaf nodes are: "<<count;
    return 0;
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1