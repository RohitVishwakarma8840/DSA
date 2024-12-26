#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // only unique val will be stored 
    // store value in sorted order 
    // insertion , deletion , search have o(logn) complexity 
    // generally implemented using red black tree
    // we can sort it in descending using 
    // greater<type> operator.

 set<int>s;

 s.insert(10);
 s.insert(20);
 s.insert(30);
 s.insert(10);  // duplicate values cannot be inserted 
 s.insert(40);


 for(auto it = s.begin(); it!=s.end(); it++){

   cout<< *it<<" ";
     
 }

 cout<<endl<<endl;


 // IN descending order 
  set<int,greater<int>>s1;

  s1.insert(10);
 s1.insert(20);
 s1.insert(30);
 s1.insert(10);  // duplicate values cannot be inserted 
 s1.insert(40);


 for(auto it = s1.begin(); it!=s1.end(); it++){

   cout<< *it<<" ";
     
 }


    return 0;
}