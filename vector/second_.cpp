#include<iostream>
#include<vector>
using namespace std;

int main(){

// vector<int>vnew;

// vnew.push_back(4);
// vnew.push_back(41);
// vnew.push_back(56);
// vnew.push_back(67);
// vnew.push_back(98);

// cout<<"the size of vector is "<<vnew.size()<<endl;;
// cout<<"the size of capacity is "<<vnew.capacity()<<endl;

// vnew.pop_back();
// cout<<"the size of vector is "<<vnew.size()<<endl;;
// cout<<"the size of capacity is "<<vnew.capacity()<<endl;


// vnew.erase(vnew.begin()+1);

// for(int i=0;i<vnew.size();i++){
//     cout<<vnew[i]<<" ";
// }

// cout<<endl;

// vnew.insert(vnew.begin()+1,50);
// for(int i=0;i<vnew.size();i++){
//     cout<<vnew[i]<<" ";
// }

// cout<<endl;
// vnew[1]=78;
// for(int i=0;i<vnew.size();i++){
//     cout<<vnew[i]<<" ";
// }

// cout<<endl;

// vnew.clear();
// cout<<"the size of vector is "<<vnew.size()<<endl;;
// cout<<"the size of capacity is "<<vnew.capacity()<<endl;

vector<int>arr;

arr.push_back(2);
arr.push_back(12);
arr.push_back(26);
arr.push_back(122);

cout<<arr[0]<<endl;
cout<<arr.front()<<endl;
cout<<endl;

cout<<arr[arr.size()-1]<<endl;
cout<<arr.back()<<endl;


vector<int>a;
// copy value of one vector to other 
a=arr;

cout<<a.size()<<endl;





    return 0;
}










