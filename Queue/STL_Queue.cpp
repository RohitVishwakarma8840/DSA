#include<iostream>
#include<queue>
using namespace std;

int main(){

// Creating a queue 
  queue<int> q;

  // Pushing the element;
  q.push(5);
  q.push(89);
  q.push(39);

  // popping the element 
  q.pop();
 
  // front element 
  cout<<q.front()<<endl;
 
 // back element 
 cout<<q.back()<<endl;

// size of the queue 
cout<<q.size()<<endl;

// checking is empty or not 
cout<<q.empty()<<endl;

    return 0;
}