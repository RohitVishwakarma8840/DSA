#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

multiset<int>s;

s.insert(10);
s.insert(20);
s.insert(10); // Mulitset mai duplicate bhi ho sakhte hai 
s.insert(40);

 for(auto it = s.begin(); it!= s.end() ; it++){
    cout<< *it<< " "; 
 }


    return 0;
}