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

// build tree
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

// recursive way
void poot(Node *root)

{
   // base case
   if (root == NULL)
      return;

   // iot --> node is in --> LRN
   poot(root->left);
   poot(root->right);
   cout << root->data << " ";
}

// iterative way using two stacks
void itpoot(Node *root)
{
   stack<Node *> st1, st2;
   st1.push(root); // 1 hoy stack ma

   while (!st1.empty())
   {
      root = st1.top();
      st1.pop();
      st2.push(root); // root=1 --> st2 ma 1 jay
      // biji var traversal ma and pachhi 3 jay ana pachhi 2 jay--> stack ma 3,2 hoy

      // left and ri8 call
      if (root->left != NULL)
      {
         st1.push(root->left); // 2 jay st2 ma
      }
      if (root->right != NULL)
      {
         st1.push(root->right); // 3 jay st2 ma
      }
   }
   // ans ave LRN---> 2,3,1
   while (!st2.empty())
   {
      cout << st2.top()->data << " ";
      st2.pop();
   }
}

// iterative way using single stack-LRN
// t.c-->o(2n) and s.c-->o(n)
void func(Node *root)
{
   stack<Node *> st;
   Node *curr = root;
   Node *temp;

   while (curr != NULL and !st.empty())
   {
      if (curr != NULL)
      {
         st.push(curr);
         curr = curr->left;
      }

      else

         // our first left--left--left is null then go first right
         temp = st.top()->right;

      // now check that right is null or not

      // if it is null then time to print it
      if (temp == NULL)
      {
         temp = st.top();
         st.pop();
         cout << temp->data << " ";

         while (!st.empty() and temp == st.top()->right)
         {
            temp = st.top();
            st.pop();
            cout << temp->data << " ";
         }
      }

      // if not null then go another left left left
      curr = temp;
   }
}

// main function
int main()
{
   Node *root = NULL;
   root = buildtree(root);
   cout << "postorder traversal using recursion     ";
   poot(root);

   cout << endl;

   
   cout << "postorder traversal using double stack    ";
   itpoot(root);
   cout << endl;
   
   cout << "postorder traversal using single stack    ";
   itpoot(root);
   cout << endl;
   
}

// i/p------------------1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// o/p----------postorder traversal is   7 11 3 17 5 1
//-------------postorder traversal is   7 11 3 17 5 1
