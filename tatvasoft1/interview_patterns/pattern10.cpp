/*
 * * * * 1
 * * * 1 * 3
 * * 3 * * 5
 * 5 * * * 7
 7 * * * * 9
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i;j--)
        {
            cout << "*" << " ";
            if(j==1 and i==0) cout << 1 << " ";
        }

        for(int j=0;j<=i;j++)
        {
            if(i == 0) continue;
            if(j==0) cout << 2*(i-1)+1 << " ";
            else cout << "*" << " ";
        }
        for(int j=0;j<=i;j++)
        {
            if(i == 0) continue;
            if(j==0) cout << 2*i+1 << " ";
        }

        cout << endl;
    }
}