#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

 unordered_set<int>s;


  // no order it follows means it is unordered 
  // O(1) Time complexity 
  // hashing implementation 
  // stores unique element 
  
 s.insert(10);
 s.insert(20);
 s.insert(30);
 s.insert(40);
 s.insert(50);   
 s.insert(90);   
 s.insert(100);   


 for(auto it = s.begin() ; it!= s.end(); it++){
    cout<< *it<< " ";
 }


    return 0;
}