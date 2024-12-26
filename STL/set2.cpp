#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // Finding the element in the set 

  set<int,greater<int>>s1;

  s1.insert(10);
 s1.insert(20);
 s1.insert(110);
 s1.insert(200);  // duplicate values cannot be inserted 
 s1.insert(210);


 for(auto it = s1.begin(); it!=s1.end(); it++){

   cout<< *it<<" ";
     
 }

 cout<<endl<<endl;


//  210 200 110 20 10 
 

 if(s1.find(210)!= s1.end())
 cout<<"Present"<<endl;
 else
 cout<<"Not present"<<endl;


 if(s1.find(280)!= s1.end())
 cout<<"Present"<<endl;
 else
 cout<<"Not present"<<endl;

//  for erasing the element we use s.erase()
//  s1.erase(10);
  


  

    return 0;
}