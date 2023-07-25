/*
for any password follow the below conds

1) at least 4 charcters
2) at least one numeric digit
3)at least one capital letter
4)must not have space and slash
5)starting char must not be a number

if password is true then return 1 else return false


*/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<functional>
#include<unordered_map>
using namespace std;


int password(string str)
{
    int n=str.size();

    bool num=false,cap=false;
    

//at least 4 charcters
    if(n<4) return 0;

//starting char must not be a number
if(str[0] >= 48 and str[0] <= 57) return 0;

for(int i=0;i<n;i++)
{
   if(str[i] >= 48 and str[i] <= 57) num=true;
   
   else if(str[i] >= 65 and str[i] <= 90) cap=true;

   else if (str[i] == ' ' or str[i] == '/') return 0;
}
if(num and cap) return 1;
else return 0;

}
int main()
{
    string str;
    cin>>str;
    cout << password(str);
}