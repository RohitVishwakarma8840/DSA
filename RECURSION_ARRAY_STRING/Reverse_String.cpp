#include<iostream>
using namespace std;

void rev(string &str,int start , int end){

// Base case 
if(start>=end)
return ;


char c=str[start];
str[start]=str[end];
str[end]=c;

// function call
rev(str,start+1, end-1);

}

int main(){

string str="rohit";
rev(str,0,4);

cout<<str<<endl;

    return 0;
}







