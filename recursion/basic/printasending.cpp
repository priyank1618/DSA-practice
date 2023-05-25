#include<iostream>
using namespace std;

//we will print
//for 5 --> 1 2 3 4 5



//debug for 3
// for 3 ->  call for 2   | -> start from 20 and execute cout-> 3
//for 2 - call for 1      |-> start from 20 and execute cout-> 2
//for 1->call for 0      |-> start from 20 and execute cout-> 1
//for 0-> return upward at line 20

void print(int n)
{
    //base case
    if(n==0) return ;

    print(n-1);


    cout << n << "  ";

}



int main()
{
    int n; cin>>n;

    print(n);
}