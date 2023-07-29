#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){//it find elements in arrar where elements are a and the b is given 3rd value 
    return a<=b;//it gives a from array which give all the possible or equal value of b=120 

}

int main(){
    int coins[]={1,2,5,10,20,50,100,200,500};
    int n=sizeof(coins)/sizeof(int);
    int money=120;
    while (money>0)
    {
    int lb=lower_bound(coins,coins+n,money,compare)-coins-1;
    int m=coins[lb];
    cout << m <<" " ;
    money =money-m;
        
    }
    
}