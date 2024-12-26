// #include <unordered_map>
// Syntax to Declare a HashMap
// unordered_map<key, value> hashMap;
// The average time complexity for search, insertion and deletion of a std::unordered_map is O(1), that is why it is very efficient.

// C++ Program for Demonstrating HashMap
// The below program demonstrates the usage of unordered_map as HashMap in C++.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

// syntax 
unordered_map<int,int>m;

m.insert(make_pair(20,30));
 m.insert(make_pair(30,310));
 m.insert(make_pair(40,230));
 m.insert(make_pair(20,230));  
 m.insert(make_pair(50,30));
 m[100] = 34;   
 m[20] = 99;    

 
 for(auto it = m.begin(); it!= m.end(); it++){
    cout<< it->first <<" "<<it->second<<endl;
 }




    return 0;
}




// int main()
// 7
// {
// 8
//     // Create an unordered_map
// 9
//     unordered_map<string, int> umap;
// 10
// ​
// 11
//     // Insert key-value pairs into the unordered_map
// 12
//     umap["Apple"] = 10;
// 13
//     umap["Mango"] = 20;
// 14
//     umap["Cherry"] = 30;
// 15
// ​
// 16
//     // Print the key-value pairs
// 17
//     for (auto it : umap)
// 18
//         cout << it.first << " " << it.second << endl;
// 19
// ​
// 20
//     return 0;
// 21
// }

// Output
// Cherry 30
// Mango 20
// Apple 10


// Time Complexity: O(1)
// Auxilliary Space: O(1)


