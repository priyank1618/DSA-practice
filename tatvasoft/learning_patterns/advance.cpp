/*

Input Format: N = 3
Result:
1    1
12  21
123321

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    int k=n;

    for (int i = 0; i < n; i++)
    {

        // numbers
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }

        //spaces
        for (int j = 2*(k-1); j > i; j--)
        {
            cout << "*";
        }

        k=k/2;
        

        for (int j = 0; j <= i; j++)
        {
            cout << i - j + 1;
        }
        cout << endl;
    }
}