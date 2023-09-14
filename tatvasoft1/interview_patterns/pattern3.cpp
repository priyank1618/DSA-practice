/*

1 1
1 0 0 1
1 0 A A 0 1
1 0 1 0 0 1 0 1
1 0 1 0 1 1 0 1 0 1
*/

#include<iostream>
using namespace std;

int main()
{

    int n=5;
    int start=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
           if (i==2 and j==2) cout << "A" << " ";
           else if(j % 2 == 0) cout << 1<<" ";
           else cout<<0<< " "; 
        }

        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for(int j=0;j<=i;j++)
        {
            if(i==2 and j==0) cout << "A" << " ";
            cout << start << " ";
            start=1-start;    
        }

        cout << endl;


    }
}