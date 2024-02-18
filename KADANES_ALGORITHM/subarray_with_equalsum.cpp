#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool divide(vector<int>arr){

int prefix=0; int total_sum=0; int n=arr.size();

// total sum 
for(int i=0; i<n;i++)
total_sum+=arr[i];

for(int i=0;i<n;i++){

prefix+=arr[i];
int ans=total_sum - prefix;

if(ans==prefix)
return 1;

}

return 0;
}




int main(){

int n;
cout<<"enter the size of array "<<endl;
cin>>n;
vector<int>v(n);

for(int i=0;i<n;i++)
 cin>>v[i];


cout<<divide(v)<<endl;


    return 0;
}










