// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void print(int n){
    
    if(n<1){
        return ;
    }
    
    print(n-1);
    cout<<n<<" ";
    
}


int main(){
    
    int n=10;
    print(n);
    
    return 0;
}