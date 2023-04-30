//print all the subarray

#include<bits/stdc++.h>
using namespace std;

// i loop 0 to n
//j loop 0 to n-i (0->4 times,1->3 times,2->3 times,3->1 times)

// k loop to i to i+j
    //    0
    //    0 1
    //    0 1 2 
    //    0 1 2 3
    //    1
    //    1 2 
    //    1 2 3 
    //    2
    //    2 3
    //    3

int main()
{
    vector<int> d{0,1,2,3};


    // this is o(n)

    for (int i = 0; i < d.size(); i++)
    {
        for (int j = 0; j < d.size()-i; j++)
        {
            for (int k = i; k <= i+j; k++)
            {
                cout << d[k] << " ";
            }
            cout << endl;
            
        }
        
    }
    
}