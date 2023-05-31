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
void reverse3(string& s1,int i)
{
    //base case 
    if(i>s1.length()-i-1) return;

    swap(s1[i],s1[s1.length()-i-1]);

    reverse3(s1,i+1);
}

int main()
{
    string s="raman";
    string s1="chaman";

    int n = s.length();

    reverse1(s,n);
    cout << endl;

    reverse2(s,0,s.length()-1);

   cout << s <<" "<< endl;
    reverse3(s1,0);

    cout << s1 << " " <<endl;
    
}