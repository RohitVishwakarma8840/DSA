#include<iostream>
using namespace std;

int main(){

char arr[5]="1234";
char *ptr=arr;

cout<<arr<<endl;  // 1234 how that is happening in both cases 
cout<<ptr<<endl;  // 1234 
cout<<endl;

// To Print the Addresses we need to use void pointer 
// void pointer does not tell the datatype of the type to which it is pointing 
// we know char array have different but using void we can do that 

cout<<(void*)arr<<endl;
cout<<(void*)ptr<<endl;


char name='a';
char *ptr2=&name;
cout<<&name<<endl;
cout<<(void*)&name<<endl;
cout<<(void*)ptr2<<endl;





    return 0;
}







