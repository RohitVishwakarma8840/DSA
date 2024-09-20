class Solution {
public:
    int minAddToMakeValid(string s) {
    stack<char>St;
    int count = 0;

    for(int i=0; i<s.size(); i++){
   
   if(s[i]=='(')
   St.push(s[i]);

   else{
    if(St.empty())
    count++;
    else
    St.pop();

   }
    }


  return count+St.size();


    
    }
};