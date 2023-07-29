/*

A denotes AND operation
B denotes OR operation
C denotes XOR operation


INPUT --> 1C0C1C1A0B1
OUTPUT-->1

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//functions
char AND(char a,char b)
{

    //-------------------------------here we have to return the chars 0 and 1
    //----------------------------------
    if(a == 1 and b==1) return '1';
    else return '0';
}
char OR(char a,char b)
{
    if(a==0 and b==0) return '0';
    else return '1';
}
char XOR(char a,char b)
{
    if(a==b) return '0';
    else return '1';
}

int func(string str)
{

    if(str.length()==0) return -1;
   //take first letter of string'
   char res1=str[0];

   for(int i=1;i<str.length();i=i+2)
   {

    //take one and two letter of string
      char op=str[i];
      char res2=str[i+1];

    //now do operations
    if(op == 'A') res1=AND(res1,res2);
    else if(op == 'B') res1=OR(res1,res2);
    else  res1 = XOR(res1,res2);

   } 

   if(res1 == '1') return 1;
   else return 0;
}
int main()
{
    string str="1C0C1C1A0B1";
    cout << func(str);


}