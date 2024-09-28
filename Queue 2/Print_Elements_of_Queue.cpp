#include<iostream>
#include<queue>
using namespace std;

int main(){

// creating a queue 
queue<int>q;

q.push(2);
q.push(4);
q.push(6);
q.push(3);
q.push(5);

 // Printing the values of q 
 int n = q.size();

 while(n--){

 cout<<q.front()<<" ";
 q.push(q.front());
 q.pop();


 }

cout<<endl;
 cout<<q.size()<<endl;

    return 0;
}





