#include<iostream>
#include<stack>
using namespace std;

bool check(string s){

stack<char>St;

for(int i=0; i<s.size() ; i++){

    // Opening bracket comes 
 if(s[i]=='(')
 St.push(s[i]);

 // Closing bracket comes
 else{
  if(St.empty())
  return 0;
  else
  St.pop();

 }


}

return St.empty();



}

int main(){
    
    string str="((()))";
    cout<<check(str)<<endl;
    return 0;




    return 0;
}