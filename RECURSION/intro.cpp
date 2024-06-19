#include<iostream>
using namespace std;

void fun(int n ){

if(n==0){
  cout<<"Happy Birthday"<<endl;
   return ;
}

cout<<n<<" Days left for the Birthday"<<endl;
 fun(n-1);

}


int main(){

int n=3;

// fun(n);

fun(7);

    return 0;
}












