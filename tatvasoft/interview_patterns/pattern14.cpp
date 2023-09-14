/*
1 * * * * * * * * *
* 1 2 3 * * * * * *
* * 1 2 3 4 5 * * *
* * * 1 2 3 4 5 6 7
*/

/*
1 * * * * * * * * *
* 1 2 3 * * * * * *
* * 1 2 3 4 5 A * *
* * * 1 2 3 4 5 6 7
*/


#include<iostream>
using namespace std;

int main()
{

    int x=1,k=1,d=9;
    for(int i=0;i<4;i++)
    {

        for(int j=1;j<=i;j++)
        {
            if(i>0)
            {
                cout << "* " ;
            }
        }

        for( x=1;x<=k;x++)
        {

            cout << x << " ";
        }

        for(int h=d;h>0;h--)
        {
            if(h==3 and i==2) cout << "A ";
            else cout << "* ";
        }
        
        k=k+2;
        d=d-3;

        cout << endl;
    }
    
}