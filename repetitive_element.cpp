#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// User function Template for C++
class Solution {
      public:
        int findDuplicate(vector<int>& arr) {
            // code here
            
            unordered_map<int,int> mp;
            for(int i=0;i<arr.size();i++){
                mp[arr[i]]++;
            }
            
            for(auto i: mp){
                if(i.second>1){
                    return i.first;
                }
            }
            return 0;
        }
    };

    int main(){
      int t;
      cin>>t;
      while(t--){
            string s;
            vector<int> arr;

            getline(cin, s);
            stringstream ss(s);
            int number;
            while (ss >> number) {
                arr.push_back(number);
            }

            Solution obj;
            cout<<obj.findDuplicate(arr)<<endl;
            cout<<"~"<<endl;
      }
      return 0;
    }

    