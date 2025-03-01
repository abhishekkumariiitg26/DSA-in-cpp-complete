#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        this->data = val;
        this->left =  NULL;
        this->right= NULL;
    }
};

void Pre_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    Pre_order(root->left);
    Pre_order(root->right);
}
void In_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    In_order(root->left);
    cout << root->data << " ";
    In_order(root->right);
}
void Post_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Post_order(root->left);
    Post_order(root->right);
    cout << root->data << " ";
}

void Level_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);

    Node *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        cout << temp->data << " ";

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

void build_from_level_order(Node* &root){
    queue<Node*>q;
    cout<<"Enter the data for root: "<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    q.push(root);
    while (!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        cout<<"enter the left node for: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1){
            temp->left=new Node(leftdata);
            q.push(temp->left);
        }
        cout<<"enter the right node for: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1){
            temp->right=new Node(rightdata);
            q.push(temp->right);
        }
    }
    
}

int main()
{
    
    Node *root=NULL;
    build_from_level_order(root);
    cout << endl
         << "Pre Order traversal: ";
    Pre_order(root);
    cout << endl
         << "In Order traversal: ";
    In_order(root);
    cout << endl
         << "Post Order traversal: ";
    Post_order(root);
    cout << endl
         << "Level Order traversal: ";
    Level_order(root);

    return 0;
}