#include<iostream>
using namespace std;

// CALL By Value 
// void swap(int a,int b){
//   int temp=a;
//   a=b;
//   b=temp;

// }

// Call by Refrence 
void swap(int &a,int &b){

 int temp=a;
 a=b;
 b=temp;


}



int main(){


int x=10;
int y=20;
cout<<x<<" "<<y<<endl;
swap(x,y);

cout<<x<<" "<<y<<endl;





    return 0;
}