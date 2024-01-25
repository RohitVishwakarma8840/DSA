#include<iostream>
using namespace std;

int main(){

// int i;
// cout<<"enter the value of i "<<endl;
// cin>>i;
// switch (i)
// {
// case 1:
//     cout<<"Rohit"<<endl;
//     break;

// case 2:
// cout<<"Mohit"<<endl;
// break;

// default:
// cout<<"sohit";
//     break;
// }

double n1,n2,result;
cout<<"enter the value of num1 and num2 respectively";
cin>>n1;
cin>>n2;

char operand;
cout<<"enter the value of operator "<<endl;
cin>>operand;


switch (operand)
{
case '+':
    result=n1+n2;
    cout<<result<<endl;
    break;

case '-':
    result=n1-n2;
    cout<<result<<endl;
    break;

case '*':
    result=n1*n2;
    cout<<result<<endl;
    break;

case '/':
    result=n1/n2;
    cout<<result<<endl;
    break;









default:
cout<<"invalid operation "<<endl;
    break;
}










    return 0;
}









