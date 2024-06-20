#include<iostream>
using namespace std;

void upper(string &str , int index){

    if(index==-1)
    return ;

 str[index]='A'+str[index]-'a';

upper(str,index-1);

}

int main(){

string str="rohit";
upper(str,4);

cout<<str<<endl;


    return 0;
}






