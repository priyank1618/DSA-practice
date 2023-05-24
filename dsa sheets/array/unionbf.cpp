
//******************************************
// union of two sorted array
// time complexity = n1*logn1 +  n2*logn2
//space complexity = both elemnt save karva set banayo e + return karva vec banayo e
//******************************************

#include<bits/stdc++.h>
using namespace std;


//brute force approch using set
vector<int> sortedArray (vector<int> p1,vector<int> p2)
{
    //first define the set
    set<int> st;

    //using loop set me dal do
    // for this time complexity will be n1*logn1
    for (int i = 0; i < p1.size(); i++)
    {
        st.insert(p1[i]);
    }
     // for this time complexity will be n2*logn2
    for (int i = 0; i < p2.size(); i++)
    {
        st.insert(p2[i]);
    }

    // put all the set elemnts into vector inorder to return
      vector<int> temp;
      for(auto it : st) {

        cout << it << "  ";
        temp.push_back(it);}

      return temp;
    
}







int main(){                     
    vector<int> p1{1,1,2,3,4,5};
    vector<int> p2{2,3,4,4,5,6};

    sortedArray(p1,p2);

 }