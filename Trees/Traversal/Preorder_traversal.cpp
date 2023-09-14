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

//build tree
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


//recursive way
void prot(Node *root)
{
   // base case
   if (root == NULL)
      return;

   // prot --> node is pre --> NLR
   cout << root->data << " ";
   prot(root->left);
   prot(root->right);
}

//iterative way
void itprot(Node *root)
{
   // jo root j na hoy to return
   if (root == NULL)
      return;

   // stack laisu
   stack<Node *> st;
   st.push(root);

   while (!st.empty())
   {

      // have apde badlvanu 6 atle root muki avano top vada pa
      root = st.top();
      st.pop();

      // have ram kahani
      cout << root->data << " ";
      if (root->right != NULL)
         st.push(root->right);
      if (root->left != NULL)
         st.push(root->left);
   }
   return;
}

int main()
{
   Node *root = NULL;
   root = buildtree(root);
   cout << "preorder traversal is   ";
   prot(root);
   cout << endl;
   cout << "preorder traversal is   ";
   itprot(root);
   cout << endl;
}

// i/p------------------1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// o/p-------------preorder traversal is   1 3 7 11 5 17
//----------------preorder traversal is   1 3 7 11 5 17
