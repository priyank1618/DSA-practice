#include<iostream>
using namespace std;

int main()
{
    string s= "geeks";

    int n=s.length();
    int count=1;

     for (int i = 0; i < n; i++)
     {
        for(int j=0;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout << s[k];
            }
            cout << endl;
        }
     }
     
}