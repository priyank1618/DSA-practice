#include<iostream>
using namespace std;

bool palindrom(string s,int i,int j)
{
    if(i>j) return true;

    if(s[i]!=s[j]) return false;
    else return palindrom(s,i+1,j-1);
}


int main()
{
     string s="baba";

     int n=s.length();

     bool ans =palindrom(s,0,s.length()-1);
     cout << ans << endl;


}