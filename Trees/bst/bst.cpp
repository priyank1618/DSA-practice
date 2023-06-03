#include<iostream>
#include<queue>
using namespace std;


class Node{


    public:
    int data;Node* left;Node* right;

    Node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};



Node* makebst(Node* root,int data)
{
    //base case
    //we are on the first Node which is null
    if(root == NULL)
    {
        //this is the time to make new Node
        root  = new Node(data);
        return root;
    }

    if(data < root -> data)
    {
        root -> left = makebst(root -> left , data);
    }
    else{
        root ->right = makebst(root->right,data);
    }


  //we return from last elemenet
    return root;

}

void lot(Node* root)
{
    //aa kam queue thi thay
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp=q.front();q.pop();

        if(temp == NULL)
        {
            // matlab time ayi gayo endl marvano
         cout << endl;
          if(!q.empty())
          {
            q.push(NULL);
          }
        }
        else{
            cout << temp->data << " ";
             
             if(temp->left) q.push(temp->left);
             if(temp->right) q.push(temp->right);

        }
    }
}

void takeinput(Node* &root)
{
     int data;cin>>data;


      //jab tak -1 nahi he input lo
     while(data != -1)
     {
        root=makebst(root,data);
        cin>> data;
     }
}

int main()
{
   Node* root=NULL;


   cout <<"enter the data to make the bst" << endl;
   takeinput(root);

   cout << endl;
   cout << "printing the bst" << endl;
    lot(root);

   return 0;
}

// 10 8 21 7 27 5 4 3 -1