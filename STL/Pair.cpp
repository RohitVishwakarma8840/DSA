#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

 pair<string,int>p;

 p = make_pair("Rohit",30);
 
 cout<<p.first<<" "<<p.second<<endl;


// name , age , weight 3 ko store karna ho toh  
 pair<string,pair<int,int>>p2;

// one way of storing 3 values in a pair 
//  p2.first = "Rohit";
//  p2.second.first = 21;
//  p2.second.second = 4;

 p2 = make_pair("Jake",make_pair(26,85));

 cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;




    return 0;
}








