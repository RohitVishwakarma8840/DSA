#include<iostream>
using namespace std;

int main(){

string s="rohit";

int start=0, end=s.size()-1;

while(start<=end){

    swap(s[start],s[end]);
    start++,end--;
}

cout<<s<<endl;

// finding the size of the string 
int size=0; 

while(s[size]!='\0'){

size++;
}
cout<<"the size of the string is "<< size<<endl;



string s6="namas";

int starting=0, ending=s6.size()-1;

while(starting <ending){

if(s6[starting]!=s6[ending]){
    cout<<"not a palindrome "<<endl;
    return 0;
}

start++, end--;

}

cout<<"the given string is a palindrome "<<endl;






    return 0;
}










