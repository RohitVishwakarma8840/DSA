#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

// creating a map
map<int,int>m;

// Map stores in key-value pair .
// key should be unique .
// implemented using AVL Tree or red black tree.
// O(logn)  search , delete , update .


 m.insert(make_pair(20,30));
 m.insert(make_pair(30,310));
 m.insert(make_pair(40,230));
 m.insert(make_pair(20,230)); // it will not be inserted becoz duplicate 
 m.insert(make_pair(50,30));
 m[100] = 34;  // another way to creation 
 m[20] = 99;   // updation of value 


 for(auto it = m.begin(); it!= m.end(); it++){
    cout<< it->first <<" "<<it->second<<endl;
 }
 
  cout<<endl;
   
   cout<<m[20]<<endl;
  


    return 0;
}
