#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data : ";
    int r;
    cin >> r;
    root = new Node(r);

    if (r == -1)
    {
        return NULL;
    }
    cout << "Enter the data for inserting in left of : " << r << endl;
    root->left = buildTree(root->left);

    cout << "Enter the data for inserting in right : " << r << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
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
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void buildfromLOT(Node *&root)
{
    queue<Node *> q;
    int data;
    cout << "Enter the data : ";
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        int leftData;
        cout << "Enter left data of : " << temp->data << endl;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout << "Enter right data of : " << temp->data << endl;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{

    Node *root = NULL;
    // 1 2 10 -1 -1 12 -1 -1 6 7 -1 -1 -1
    // root = buildTree(root);

    buildfromLOT(root);
    cout << endl;

    levelOrderTraversal(root);

    cout << "Inorder Traversal : " << endl;
    inorder(root);
    cout << endl;

    cout << "Preorder Traversal : " << endl;
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal : " << endl;
    postorder(root);
    cout << endl;
}