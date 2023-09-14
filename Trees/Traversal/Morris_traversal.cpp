#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node
{

public:
    int data;
    Node *left = NULL;
    Node *right = NULL;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildtree(Node *root)
{
    cout << "enter the data" << endl;
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1)
        return NULL;

    cout << "enter the data for the left of  " << data << endl;
    root->left = buildtree(root->left);

    cout << "enter the data for the right of the  " << data << endl;
    root->right = buildtree(root->right);

    return root;
}

// morris inorder---->LNR
void morris_iot(Node *root)
{

    Node *curr = root;

    while (curr != NULL)
    {
        // for morris inorder first check left is null or not

        // jo left null to print node
        if (curr->left == NULL)
        {
            cout << curr->data << " ";
            curr = curr->right;
        }

        // jo left null na hoy to traverse karta pela thread banavo padse
        else
        {
            Node *prev = curr->left;

            while (prev->right && prev->right != curr)
            {
                prev = prev->right;
            }

            // 2 conditions---

            // prev null hoy
            if (prev->right == NULL)
            {
                // time to make thread
                prev->right = curr;

                // now curr go tension free to left
                curr = curr->left;
            }

            // thread already present
            else
            {
                // break the thread because already left has been traversed
                prev->right = NULL;

                // print the node for inoeder
                cout << curr->data << " ";

                // now go to right
                curr = curr->right;
            }
        }
    }
}


// morris preorder---->NLR
void morris_preot(Node *root)
{

    Node *curr = root;

    while (curr != NULL)
    {
        // for morris preorder first check left is null or not

        // jo left null to print node
        if (curr->left == NULL)
        {
            cout << curr->data << " ";
            curr = curr->right;
        }

        // jo left null na hoy to traverse karta pela thread banavo padse
        else
        {
            Node *prev = curr->left;

            while (prev->right && prev->right != curr)
            {
                prev = prev->right;
            }

            // 2 conditions---

            // prev null hoy
            if (prev->right == NULL)
            {
                // time to make thread
                prev->right = curr;
                
                //after making thread we will now print node first and go for left one
                cout << curr->data << " ";

                // now curr go tension free to left
                curr = curr->left;
            }

            // thread already present
            else
            {
                // break the thread because already left has been traversed
                prev->right = NULL;

                // now go to right
                curr = curr->right;
            }
        }
    }
}

int main()
{
    Node *root = NULL;
    root = buildtree(root);

    cout << "morris inorder traversal is   ";

    morris_iot(root);

    cout  << endl;

    cout << "morris preorder traversal is   ";

    morris_preot(root);

    cout << endl;




}

// i/p------------------1 2 -1 -1 3 -1 -1


// o/p-----------inorder traversal is  2 1 3 
// o/p-----------preorder traversal is 1 2 3 
