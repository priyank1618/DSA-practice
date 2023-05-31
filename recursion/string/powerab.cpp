// for odd power = a * a^b/2 * a^b/2
//for even power= a^b/2 * a^b/2
#include<iostream>
using namespace std;

int pow(int a ,int b)
{
   //base case
   if(b==0) return 1;
   if(b==1) return a;


   //power is odd and even
   if(b%2==0) return pow(a,b/2) * pow(a,b/2);
   else  return a* pow(a,b/2) * pow(a,b/2);
}

int main()
{
    int a,b;
    cin>> a>>b;

    int ans = pow(a,b);

    cout << ans << endl;
}