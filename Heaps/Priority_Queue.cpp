#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

 priority_queue<int>p;

 p.push(10);
 p.push(20);
 p.push(11);
 p.push(18);
 p.push(15);

   cout<<"Building Maximum  Heap "<<endl;


cout<<p.top()<<endl;

// Delete 
 p.pop();
 cout<<p.top()<<endl;

 cout<<p.size()<<endl;

 while(!p.empty()){
    cout<<p.top()<< " ";
    p.pop();
 }

 cout<<endl;
 
  cout<<"Building Minimum Heap "<<endl;

 // Buidiing Min Heap 
 priority_queue<int ,vector<int>,greater<int>>p1;  // Min heap

 p1.push(10);
 p1.push(20);
 p1.push(11);
 p1.push(18);
 p1.push(15);


cout<<p1.top()<<endl;

// Delete 
 p1.pop();
 cout<<p1.top()<<endl;

 cout<<p1.size()<<endl;

 while(!p1.empty()){
    cout<<p1.top()<< " ";
    p1.pop();
 }



    return 0;
}