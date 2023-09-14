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

// build the tree

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

// recursive traversal

void iot(Node *root)
{
   // base case
   if (root == NULL)
      return;

   // iot --> node is in --> LNR
   iot(root->left);
   cout << root->data << " ";
   iot(root->right);
}

// iterative traversal
void itiot(Node *root)
{
   stack<Node *> st;
   Node *temp = root;

   while (true)
   {
      if (temp != NULL)
      {
         st.push(temp); // st ma 1 and 2 hase
         temp = temp->left;
      }

      else
      {
         if (st.empty())
            break;
         temp = st.top();
         st.pop(); // hal temp ma 2 hase
         cout << temp->data << " ";
         temp = temp->right; // 2 no left check thai ne upar thi ayo 6 have right check thase
      }
   }
   return;
}

// main function

int main()
{
   Node *root = NULL;
   root = buildtree(root);

   cout << "inorder traversal is   ";
   iot(root);
   cout << endl;

   cout << "inorder traversal is   ";
   itiot(root);
   cout << endl;
}

// i/p------------------1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

// o/p-----------inorder traversal is   7 3 11 1 17 5
//--------------inorder traversal is   7 3 11 1 17 5
