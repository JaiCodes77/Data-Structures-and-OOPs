#include <iostream>
using namespace std;
#include <queue>
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{
    cout << "enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter the data for inserting in left of  " << data << endl;
    root->left = buildtree(root->left);
    cout << "enter the data for inserting in the right of  " << data << endl;
    root->right = buildtree(root->right);
    return root;
}

void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
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
    void inorder(node* root)
    {
        // base case
        if (root == NULL)
        {
            return;
        }
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void preorder(node * root)
    {
        // base case
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(node * root)
    {
        // base case
        if (root == NULL)
        {
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    cout << "enter the data" << endl;
    cout << root->data << endl;
    cout << "printing the level order traversal of the binary tree" << endl;
    levelordertraversal(root);

    cout << " the inorder traversal of the treee is" << endl;
    inorder(root)
            cout
        << " the preorder traversal of the treee is" << endl;
    preorder(root)
            cout
        << " the postorder traversal of the treee is" << endl;
    postorder(root)

        return 0;
}