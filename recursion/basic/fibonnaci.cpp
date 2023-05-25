#include<iostream>
using namespace std;


// 0 1 1 2 3 5 8 13 21
// 0 1 2 3 4 5 6  7  8 (indexing)

//if user enter 6 then return 8


//debug for 5

//for 5 -> call is func(4)+func(3)   |  f(4)+f(3)= 3+2 = 5 --> it will shown as o/p
//for 4 -> call is func(3)+func(2)   |  f(3)+f(2)=2+1= 3-->f(4)=3
//for 3 -> call is func(2)+func(1)   |  f(2)+f(1)=1+1=2 -->f(3)=2 return upward
//for 2 -> call is func(1)+func(0)   -> return from base case  func(1)=1 and func(0)=0 -->return upward f(2)=1


int fib(int n){

//base case
if(n == 0) return 0;
if(n == 1) return 1;

return fib(n-1)+fib(n-2);

}

int main()
{
    int n; cin>>n;

    int ans =fib(n);

    cout << ans << endl;
}