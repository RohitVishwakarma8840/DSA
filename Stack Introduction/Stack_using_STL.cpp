#include<iostream>
#include<stack>
using namespace std;


int  main(){

stack<int>S;
S.push(5);
S.push(6);
S.push(7);

// Size of stack 
cout<<S.size()<<endl;

// Top of the Stack 
cout<<S.top()<<endl;

S.pop();

cout<<S.top()<<endl;
cout<<S.empty()<<endl;

    return 0;
}








