#include<iostream>
using namespace std;

//we will print
//for 5 --> 5 4 3 2 1



//debug for 3
// for 3 -> cout -> 3-> call for 2 
//for 2 ->cout->2 -> call for 1
//for 1->cout->1-> call for 0
//for 0-> return upward

void print(int n)
{
    //base case
    if(n==0) return ;

    cout << n << "  ";

    print(n-1);
}



int main()
{
    int n; cin>>n;

    print(n);
}