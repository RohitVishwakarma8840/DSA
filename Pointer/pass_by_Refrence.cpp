#include<iostream>
#include<vector>
using namespace std;

void swap(int &p1 , int &p2){
int temp=p1;
p1=p2;
p2=temp;

}

void swapvector(vector<int>&v2){

for(int i=0;i<v2.size();i++)
v2[i]=20;
}


int main(){

// what is Refrence Variable 
// Refrence variable is same as that of the original but with a different name it has 
int num=10;
int &temp=num;
// this is the syntax for creating a refrence variable 
cout<<num<<" "<<temp<<endl;
cout<<&num<<" "<<&temp<<endl;

// here you can see that both have same address 

int first=10, second=20;
cout<<first<<" "<<second<<endl;
swap(first,second);
cout<<first <<" "<<second<<endl;

vector<int>v(5,0);
swapvector(v);

for(int i=0;i<5;i++)
cout<<v[i]<<" ";



    return 0;
} 