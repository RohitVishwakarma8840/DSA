#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class MaxHeap{

 int *arr;
 int size;  // total elements in heap 
 int total_size;  // total size of array

 public:

 MaxHeap(int n){

   arr = new int[n];
   size = 0;
   total_size = n;

 }

  // insert into the heap 
  void insert(int value){


  }

};

int main(){

 MaxHeap H1(6);
 H1.insert(4);
 H1.insert(6);
 H1.insert(11);





    return 0;
}