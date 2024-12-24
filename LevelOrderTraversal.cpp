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
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        int levelSize = q.size();

        for (int i = 0; i < levelSize; i++)
        {
            node *temp = q.front();
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
        cout << endl;
    }
}


int main()
{
    node *root = NULL;
    root = buildtree(root); 
    cout<<"enter the data"<<endl;
    cout<< root -> data <<endl;
    cout << "printing the level order traversal of the binary tree" << endl;
    levelordertraversal(root);

    return 0;
}