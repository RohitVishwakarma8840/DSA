#include<iostream>
using namespace std;

int main(){

// string s; 
// cout<<"enter the string that you want to print it "<<endl;
// getline(cin,s);
// cout<<s<<endl;
// cout<<s.size()<<endl;

string s1="rohit"; 
string s2="mohit";


s1.push_back('p');
cout<<s1<<" after appendation it is that "<<endl;

s1.pop_back();
cout<<s1<<" after popping out it is that "<<endl;
// string s3=s1+s2;
// another method to do that 

s1=s1+"p";
string s3=s1.append(s2);
cout<<s3 <<"   the result is this string "<<endl;


string s4="rohit vishwakarma is a \"good\" boy";

cout<<s4<<endl;

string s5="\\0";
cout<<s5<<endl;


// string s5="\0";
// it means print the blank space only it will not print anything 

    return 0;
}







