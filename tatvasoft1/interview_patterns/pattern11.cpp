/*
1
1 0 0 1 
1 0 1 1 0 1
1 0 A 0 1
*/

#include<iostream>
using namespace std;

int main()
{

    int n=4;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==3 and j==2) cout << "A" << " ";
            else if(j % 2 == 0) cout << 1 << " ";
            else cout << 0 << " ";
        }

        cout << endl;
    }
}