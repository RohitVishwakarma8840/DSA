#include <iostream>
#include <vector>
#include <string>  // Added string header
using namespace std;

void subset(string &s , int index , int n , vector<string>&ans , string &temp){

    if(index==n){
        ans.push_back(temp);
        return ;
    }

 // Not Included 
 subset(s,index+1,n,ans,temp);

 // Included 
 temp.push_back(s[index]);
 subset(s,index+1,n,ans,temp);
 // Backtrack 
 temp.pop_back();

}

int main() {

    string s="abc";
vector<string>ans;

string temp;
subset(s,0,s.size(),ans,temp);

// Printing the answer 
for(int i=0;i<ans.size();i++){
 cout<<ans[i]<<endl;


}

    return 0;
}






