// here foir given string return all the possible permutation 

//for example

//1) abc --> o/p--> 3!=6

//2) abb--> o/p--> 3!/2!---> 3

//3)abcba-->o/p-->5!/2!*2!--->120/4--> 30



#include<iostream>
#include<cstring>
using namespace std;


//factorial function
int fact(int n)
{
    for(int i=n-1;i>1;i--)
    {
        n=n*i;
    }
    return n;
}

//permutation function
int p(char *s)
{

    //store the count of the chars
    int cnt[26]={0},len=strlen(s);

    //now using loop store aLL THE occurenec
    for(int i=0;i<len;i++)
    {
        cnt[s[i]-'a']++;
    }

    //now factorial of the len
    int res=fact(len);

    //now handle repeating cases
    for(int i=0;i<26;i++)
    {
        if(cnt[i]>1)
        {
            res=res/fact(cnt[i]);
        }
    }

    return res;

}

int main()
{
    char s[100];
    cin>>s;

   int res=p(s);
    cout<<res;

    return 0;
}