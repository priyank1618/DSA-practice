#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    

//pair
pair<int,char> p;
p.first=10;
p.second='b';

//another way
pair<int,char> p2(p);

cout<<p2.first<<endl;
cout<<p2.second<<endl;

//make_pair use to make a pair

pair<int,string> p3=make_pair(100,"audi");
cout<< p3.first<<" "<<p3.second<< endl;

// pair of pair
pair<pair<int,int>,string> car;
car.first.first=10;
car.first.second=20;
car.second="audi";

cout<< car.first.first<<" "<<car.first.second<<" "<<car.second<< endl;
}