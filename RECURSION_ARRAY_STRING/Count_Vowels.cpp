#include<iostream>
using namespace std; 

int countvowel(string str, int index){

    //base case 
    if(index==-1)
    return 0;

if(str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='o' || str[index]=='u')
return 1+ countvowel(str,index-1);

else
return countvowel(str,index-1);

}

int main(){

string str="rohit";

cout<<countvowel(str,4)<<endl;


    return 0;
}







