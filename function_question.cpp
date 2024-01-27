// #include<iostream>
// using namespace std;

// char  convert(char name){
 
// char ans=name-'a'+'A';
// return ans;

// }


// int main(){

// char ch;
// cout<<"enter the character to convert"<<endl;
// cin>>ch;

// cout<<convert(ch)<<endl;

//     return 0;
// }


// To Check for Armstrong number 



#include<iostream>
#include<cmath>
using namespace std;

int countdigit(int num){
    int counter=0;
   while(num){
      counter++;
num=num/10;

   }

return counter;
}

bool Armstrong(int num,int digit){
int n=num;
int ans=0;
 int rem;

while(num){

rem=num%10;
ans=ans+pow(rem,digit);
num=num/10;
}

if(ans==n)
return true;
else
return false;
}



int main(){
int num;
cout<<"enter the number "<<endl;
cin>>num;

int digit=countdigit(num);

cout<<Armstrong(num,digit)<<endl;



    return 0;
}



