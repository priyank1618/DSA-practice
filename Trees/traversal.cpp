#include<iostream>
#include<queue>
#include<stack>
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

void itprot(Node* root)
{
   // jo root j na hoy to return
     if(root == NULL) return;

    //stack laisu
    stack <Node*> st; 
    st.push(root);


    while(!st.empty())
    {

      // have apde badlvanu 6 atle root muki avano top vada pa
       root=st.top();st.pop();  

       //have ram kahani
       cout << root-> data << " ";
       if(root->right != NULL ) st.push(root->right);
       if(root->left != NULL) st.push(root->left) ;

    }
    return;
}


void itiot(Node* root)
{
   stack<Node*> st;
   Node* temp=root;

   while(true)
   {
      if(temp != NULL)
      {
         st.push(temp); // st ma 1 and 2 hase
         temp=temp->left;
      }

      else{
         if(st.empty()) break;
         temp=st.top(); st.pop(); // hal temp ma 2 hase
         cout << temp->data << " ";
         temp=temp->right; // 2 no left check thai ne upar thi ayo 6 have right check thase
         }
   }
   return ;
}

void itpoot(Node* root)
{
   stack<Node*> st1,st2;
   st1.push(root); // 1 hoy stack ma

   while(!st1.empty())
   {
      root = st1.top();st1.pop();st2.push(root); //root=1 --> st2 ma 1 jay 
      // biji var traversal ma and pachhi 3 jay ana pachhi 2 jay--> stack ma 3,2 hoy

      //left and ri8 call
      if(root->left != NULL)
      {
         st1.push(root->left); // 2 jay st2 ma
      }
      if(root->right != NULL)
      {
         st1.push(root-> right);// 3 jay st2 ma
      }
   }


// ans ave LRN---> 2,3,1
   while(!st2.empty())
   {
      cout << st2.top()->data << " " ;
      st2.pop();
   }
}

int main()
{
   Node* root=NULL;
   root=buildtree(root);
   lot(root);

   cout << "inorder traversal is   " ; iot(root); cout << endl;
   cout << "preorder traversal is   " ; prot(root);cout<< endl;
   cout << "postorder traversal is   " ; poot(root);cout<<endl;cout << endl;

   cout << "inorder traversal is   " ; itiot(root); cout << endl;
   cout << "preorder traversal is   " ; itprot(root); cout << endl;
   cout << "postorder traversal is   " ; poot(root);cout<<endl;cout << endl;
}

//i/p------------------1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //o/p-----------1
//------------------3 5
//------------------7 11 17 