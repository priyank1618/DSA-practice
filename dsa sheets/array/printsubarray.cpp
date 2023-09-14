/*
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
2 
2 3 
2 3 4 
2 3 4 5 
3
3 4
3 4 5
4
4 5
5
*/



#include<iostream>
using namespace std;


int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;

int count =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<< arr[k] << " ";
            
            }
                cout << endl;
        }
    }

}