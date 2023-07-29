#include<iostream>
#include<string>
using namespace std;
int main(){
    //string initialization
    string s0;
    string s1("hello");
    string s2 ="hello";
    string s3(s2);
    string s4 = s3;
    char arr[]={'a','b','c','\0'};// it is  stoped at null character
    string s5(arr);  //stringification


    // cout<< " s0"<<s0<<endl;
    // cout<< "s1 "<<s1<<endl;
    // cout<< " s2"<<s2<<endl;
    // cout<< " s3"<<s3<<endl;
    // cout<< " s4"<<s4<<endl;
    // cout<< " s5"<<s5<<endl;



    // ------>> append function to add the string
    //------>> remove whole string
    // ----->> compare two string
   // ------->> find the substring
   //-------->> remove word from the string.


  // ------>> append function
    s0.append("i love cpp");
    cout << s0 << endl;

    s0 = s0 + " hi ";
    cout << s0 << endl;

    //------>> remove whole string
    cout <<s0.length()<<endl; // give length of string
    s0.clear(); // it clear whole the string
    cout << s0.length()<< endl; 

    // ----->> compare two string
    string s6="Apple";
    string s7="Mango";
   cout <<  s6.compare(s7)<< endl ;//-------> it gives 0 for equal and >0 or <0 for not equal
   cout<<"this is s6 of 0   " << s6[0] << endl;

   // ------->> find the substring
   string s8=" i love my laptop";
   cout << s8.find("my")<< endl; // it gives the index of the starting index of my


   //-------->> remove word from the string.
   string word="love";
   int len=word.length();
   cout<< s8 << endl;
   s8.erase(3,len);  //---->> you need to provide starting index and the length of the word you want to delet
   cout<< s8 << endl;
   



    
}
