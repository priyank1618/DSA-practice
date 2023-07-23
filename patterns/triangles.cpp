/*

janji trainagle

* * * * * 
* * * * 
* * * 
* * 
* 


*/


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=5;


    //janji triangle
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}