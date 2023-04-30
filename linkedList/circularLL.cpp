#include <iostream>
using namespace std;
class node
{

public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            // after deletion it will point null
            // in circular ll we not need to point next pointer to null
            // this->next=NULL;
        }
        cout << "the deleted value is " << value << endl;
    }
};

void insertnode(node *&tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        // creat new node
        node *temp = new node(d);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        // assuming that element is present is in the list
        // non empty list
        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found curr representing the element vala node

        // now insert new node init new node
        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(node *&tail)
{
    node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;

    } while (tail != temp);
    cout << endl;
}

void deletnode(node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "list khali 6" << endl;
        return;
    }

    else
    {
        // non empty
        // assuming that value is present in ll
        node *prev = tail;
        node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        // now element which is to be deleted denoted by curr and its behind denoted by prev
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    node *tail = NULL;

    insertnode(tail, 5, 3);
    print(tail);

    insertnode(tail, 3, 5);
    print(tail);

    insertnode(tail, 5, 6);
    print(tail);

    insertnode(tail, 6, 8);
    print(tail);

    insertnode(tail, 8, 10);
    print(tail);

    deletnode(tail,8);
    print(tail);

    deletnode(tail,6);
    print(tail);

    deletnode(tail,10);
    print(tail);
}