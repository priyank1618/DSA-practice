#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node* next;
    node* prev;


    //constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev=NULL;
    }

    //destructor
    ~node()
    {
      int value=this->data;
      if(this->next != NULL)
      {
        delete next;
        //after deletion it will point null
        this->next=NULL;
      }
      cout << "the deleted value is "<< value << endl;
    }
};

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void inserthead(node *&head, int d)
{
    // to insert at head first creat new node
    node *temp = new node(d);

    // now we have new node with name temp
    temp->next = head;
    head->prev= temp;
    head=temp;
}
void inserttail(node *&tail, int d)
{
    // to insert at tail first creat new node
    node *temp = new node(d);

    // now we have new node with name temp
    tail->next = temp;
    temp->prev=tail;
    tail = temp;
}
void insertposition(node *&tail, node *&head, int pos, int d)
{
    // if we want to insert at the first position
    if (pos == 1)
    {
        inserthead(head, d);
        return;
    }

    // if we want to add some another position then we have to reach there
    // if we want to insert at 3 then we have to reach at 2 which is (pos-1)
    node *temp = head;
    int cnt = 1;

    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // here temp is at n-1 if n-1 is last node then its next will be null
    if (temp->next == NULL)
    {
        inserttail(tail, d);
        return;
    }

    // now temp is at the (n-1) position
    // creat new node
    node *insertnode = new node(d);

    insertnode->next = temp->next;
    temp->next->prev=insertnode->next;
    temp->next=insertnode;
    insertnode->prev=temp;

}
void deletnode(node* &tail,node* &head,int pos)
{
    //for the first postion
    if(pos==1)
    {
        node* temp=head;
        temp->next->prev=NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
       // if there is another pos then we will take two pointer prev and curr
       node* curr=head;
       node* prev=NULL;
       int cnt=1;


     while (cnt < pos)
     {
        prev=curr;
        curr=curr->next;
        cnt++;
     }

     //now curr is on the element which we want to delet and prev is behind it
     curr->prev=NULL;
     prev->next=curr->next;
     curr->next=NULL;
     delete curr;

     // just think if we delet last elemnet then prev ka next null hoga then we have to updae tail on it
     if(prev->next==NULL)
     {
        tail=prev;
     }
     
    }
}



int main()
{
    node *node1 = new node(18);
    node *head = node1;
    node *tail = node1;

    print(head);

    inserthead(head,16);
    print(head);

    inserttail(tail,20);
    print(head);

    insertposition(tail,head,1,12);
    print(head);


    insertposition(tail,head,2,14);
    print(head);


    insertposition(tail,head,6,22);
    print(head);

     deletnode(tail, head,1);
    print(head);


    deletnode(tail, head,3);
    print(head);


    deletnode(tail, head,4);
    print(head);



  
    cout << "head at" << head->data << endl;
    cout << "tail at" << tail->data << endl;
  

}



