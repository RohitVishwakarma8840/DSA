#include<iostream>
using namespace std;

// class a{

// Empty class has a padding of 1 by default

// };

class a{
 
 char c;
 int b;

 // the answer is 8 byte not 5 byte 
 // because it has the concept of padding in it . 

};



int main(){


a obj;
cout<<sizeof(obj)<<" ";




    return 0;
}





