/*

for n=3
  1
 21
321

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << i - j + 1;
        }
        cout << endl;
    }
}