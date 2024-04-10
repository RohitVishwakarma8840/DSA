#include<iostream>
using namespace std;

void swap(int *p1, int * p2){  // pass by address 

 int temp=*p1;
 *p1=*p2;
 *p2=temp;  

}


int main(){

int first=10, second=20;
cout<<first<<" "<<second<<endl;
cout<<"after swap the values are "<<endl;

swap(&first,&second);
cout<<first<<" "<<second<<endl;





    return 0;
}













