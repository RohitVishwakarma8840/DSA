#include<iostream>
using namespace std;

bool checkpal(string str , int start , int end){

// Base Case 
if(start>=end)
return 1;

if(str[start]!=str[end])
return 0; 

return checkpal(str,start+1, end-1);


}

int main(){

// string str="naman";
 string str="namon";


cout<<checkpal(str,0,4)<<endl;


    return 0;
}







