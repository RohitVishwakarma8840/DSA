#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

vector<int>v;
 
 v.push_back(23);
 v.push_back(0);
 v.push_back(4);
 v.push_back(55);


// standard way of printing minimum elements 
// such a short syntax 
for(auto i:v)
cout<<i<<" "; 

cout<<endl;

// for sorting the elements of vector we can use stl library 

sort(v.begin(),v.end());

for(auto i:v)
cout<<i<<" ";

cout<<endl;

// Binary Search in an vector using stl ;;
cout<<binary_search(v.begin(),v.end(),55)<<endl;

cout<<find(v.begin(),v.end(),55)-v.begin()<<endl;

    return 0;
}







