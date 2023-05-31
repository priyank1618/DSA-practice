#include<iostream>
using namespace std;


void reverse1(string s,int n)
{
    if(n==0) return;


    //tukde tukde
    reverse1(s.substr(1),n-1);


    //last element thi return thavanu chalu thase
    cout << s[0] << " ";
}

void reverse2(string& s,int i,int j)
{
    //base case 
    if(i>j) return;

    swap(s[i],s[j]);

    reverse2(s,i+1,j-1);
}

int main()
{
    string s="raman";

    int n = s.length();

    reverse1(s,n);


    cout << endl;

    reverse2(s,0,s.length()-1);

    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
    
}