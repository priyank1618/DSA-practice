/*
autobiography num je 6 e avo 6 k

// first num batave k num ma ketla zeros 6
//2 nd number batave k ketla ones 6
//3 rd num batave ketla twos 6 and so on......................

//jo avu hoy to number ma distinct value return karo and na hoy to zero return karo

// constrain  10 thi vadhu length nahi hoy 


//examples

1) 1210 -> o/p-> 3

2) 6210001000 --> o/p --> 4

3) 7210 --> o/p --> 0


*/


#include<iostream>
#include<cstring>
#include<algorithm>
#include<functional>
#include<unordered_map>
using namespace std;

int help(string s)
{
    int n=s.size();
    int cnt=0;

    int arr[10]={0};


    //note all the frequency in arr
    for(int i=0;i<n;i++)
    {
        arr[s[i]-'0']++;
    }

    //check for autobio
    for(int i=0;i<n;i++) if(arr[i] != (s[i]-'0')) return 0;

    //now return dis val
    for(int i=0;i<10;i++)
    {
        if(arr[i]>0) cnt++;
    }
    
    return cnt;
}



int main()
{
    string s;

    cin >> s;

    int ans=help(s);

  cout << help(s);

}
