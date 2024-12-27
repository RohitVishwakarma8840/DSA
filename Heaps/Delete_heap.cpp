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

    // heap size is available or not 
    if(size==total_size){
        cout<<"Heap overflow"<<endl;
        return;
    }

 // if space available then insert 
  arr[size] = value;
  int index = size;
  size++;

  while(index>0 && arr[(index-1)/2]<arr[index]) 
  {
    swap(arr[index],arr[(index-1)/2]);
    index = (index-1)/2;
  };

  cout<<arr[index]<< " is inserted into the heap"<<endl;


  }

  void print(){

     for(int i=0 ; i<size; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
  }

  void Heapify(int index){

  int largest = index;
  int left = 2*index + 1;
  int right = 2*index + 2;
 
  // largest will store the index of the element which is 
  // greater between the parent , left and right child .. 

  if(left<size && arr[left]>arr[largest])
   largest = left;
  if(right<size && arr[right]>arr[largest])
   largest = right;

   if(largest!=index){

    swap(arr[index],arr[largest]);
    Heapify(largest);

   }


  }

  void Delete(){
  if(size==0){
    cout<<"Heap Underflow";
    return;
  }

  cout<<arr[0]<<  " is deleted from the heap ";
  arr[0] = arr[size-1];
  size--;

   if(size==0)
   return;
    
  Heapify(0);
  cout<<endl;

  }





 
};

int main(){

 MaxHeap H1(6);
 H1.insert(4);
 H1.insert(6);
 H1.insert(11);
 H1.Delete();
 H1.print();
 H1.insert(114);
 H1.insert(24);
 H1.insert(1);
 H1.print();

 H1.Delete();
 H1.Delete();
 H1.Delete();
 H1.print();




    return 0;
}