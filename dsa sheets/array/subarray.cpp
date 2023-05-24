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


// two ways to do it 

// 1st i= 0 - n        2nd i= 0 - n
//     j= 0 - n-i          j= i - n
//     k= i - i+j          k= i - j

int main()
{
    vector<int> d{0,1,2,3};


    // this is o(n)

    for (int i = 0; i < d.size(); i++)
    {
        for (int j = i; j < d.size(); j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << d[k] << " ";
            }
            cout << endl;
            
        }
        
    }
    
}