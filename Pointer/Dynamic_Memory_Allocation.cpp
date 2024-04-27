#include<iostream>
using namespace std;

int main(){

// agar varaible ke liye heap mai memory allocate karani hai toh 
   int *ptr= new int ;
   *ptr=5;  // value assign karana ho toh 
   cout<<ptr<<endl;
   cout<<*ptr<<endl;

  float *ptr1=new float;
  *ptr1=3.5;
  cout<<ptr1<<endl;
  cout<<*ptr1<<endl;

  int n;
  cout<<"Enter the size of your array "<<endl;
  cin>>n;

  int *p = new int[n];

  // inserting the values so that we can see that 
  for(int i=0; i<n;i++)
  p[i]= i+1;

  for(int i=0;i<n;i++)
  cout<<p[i]<<" ";


    return 0;
}









