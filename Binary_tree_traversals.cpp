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

Node *BinaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    Node *temp = new Node(x);
    cout << "Enter the left child of " << x << " :";
    temp->left = BinaryTree();
    cout << "Enter the right child of " << x << " :";
    temp->right = BinaryTree();
    return temp;
}

int main()
{
    cout << "Enter the root node: ";
    Node *root;
    root = BinaryTree();
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