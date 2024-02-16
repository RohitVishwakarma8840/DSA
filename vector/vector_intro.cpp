#include<iostream>
#include<vector>
using namespace std;

int main(){

// create vector, declare ;
vector<int>v;
vector<int>v1(5,1);

// size and capacity 
cout<<"the size of vector is "<<v.size()<<endl;
cout<<"the capacity  of vector is "<<v.capacity()<<endl;

v.push_back(2);
cout<<"the size of vector is "<<v.size()<<endl;
cout<<"the capacity  of vector is "<<v.capacity()<<endl;

v.push_back(3);
cout<<"the size of vector is "<<v.size()<<endl;
cout<<"the capacity  of vector is "<<v.capacity()<<endl;

v.push_back(4);
cout<<"the size of vector is "<<v.size()<<endl;
cout<<"the capacity  of vector is "<<v.capacity()<<endl;

// update value
v[1]=5;

cout<<"the size of vector is "<<v1.size()<<endl;
cout<<"the capacity  of vector is "<<v1.capacity()<<endl;

v1.push_back(10);
cout<<"the size of vector is "<<v1.size()<<endl;
cout<<"the capacity  of vector is "<<v1.capacity()<<endl;


vector<int>v3={1,2,3,4,5};
cout<<"the size of vector is "<<v3.size()<<endl;;
cout<<"the size of capacity is "<<v3.capacity()<<endl;;


    return 0;
}













