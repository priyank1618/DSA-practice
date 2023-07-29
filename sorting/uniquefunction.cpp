#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1="122133";
   auto it = unique(s1.begin(),s1.end()); // the unique elments are combine at the end of the containers 
   cout << *it << " ohh" << endl;
    for(auto it1=s1.begin();it1 != it;it1++){// the iterators will return the it tii the unique elements thats why we print untill the iterator it here in this case
        cout << *it1 << ",";
    }

    // the unique_copy will return the copy of the unique elemnet in another contaier the original container will not be affect 
}
