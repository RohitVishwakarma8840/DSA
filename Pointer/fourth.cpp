#include<iostream>
using namespace std;

int main(){

int arr[5]={1,2,3,4,5};
int *ptr=arr;


ptr=ptr+3;
cout<<*ptr<<endl;

ptr=ptr-2;
cout<<*ptr<<endl;

ptr=arr;
cout<<*ptr<<endl;







    return 0;
}








