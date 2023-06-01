#include<iostream>
#include<queue>
using namespace std;

class Node{

   public:
   int data;Node* left=NULL;Node* right =NULL;

   Node(int d)
   {
      this->data=d;this->left=NULL;this->right=NULL;
   }
};

Node* buildtree(Node* root)
{
   cout << "enter the data"<< endl;
   int data;cin>>data;

   root=new Node(data);

   if(data == -1) return NULL;

   cout<<"enter the data for the left of  "<< data << endl;
   root->left=buildtree(root->left);

   cout << "enter the data for the right of the  " << data << endl;
   root->right=buildtree(root->right);

   return root;

}

void lot(Node* root)
{
   //aa mota bhage queue thi thay
   queue <Node*> q;
   q.push(root);q.push(NULL);

   while(!q.empty())
   {
      Node* temp=q.front();q.pop();

      if(temp==NULL)
      {
         cout << endl;
         if(!q.empty()) q.push(NULL);
      }
      else{
         cout << temp->data << " ";

         if(temp->left) q.push(temp->left);
         if(temp->right) q.push(temp->right);
      }
   }

}

void iot(Node* root)
{
   //base case 
   if(root == NULL) return;

   //iot --> node is in --> LNR
   iot(root->left);cout << root-> data << " ";iot(root->right);
}
void prot(Node* root)
{
   //base case 
   if(root == NULL) return;

   //prot --> node is pre --> NLR
     cout << root-> data << " ";prot(root->left);prot(root->right);
}
void poot(Node* root)
{
   //base case 
   if(root == NULL) return;

   //iot --> node is in --> LRN
   poot(root->left);poot(root->right);cout << root-> data << " ";
}
int main()
{
   Node* root=NULL;
   root=buildtree(root);
   lot(root);

   cout << "inorder traversal is   " ; iot(root); cout << endl;
   cout << "preorder traversal is   " ; prot(root);cout<< endl;
   cout << "postorder traversal is   " ; poot(root);
}

//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1