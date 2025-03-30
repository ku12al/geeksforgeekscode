#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
      public:
        int maxPartitions(string &s) {
            
            unordered_map<int, int> mp;
            for(int i=0;i<s.length();i++){
                mp[s[i]]  = i;
            }
            
            int count = 0;
            
            int end = 0;
            for(int i=0;i<s.length();i++){
                end = max(end, mp[s[i]]);
                if(i == end){
                    count++;
                }
            }
            return count;
        }
    };


    int main(){
      int t;
      cin>>t;
      while(t--){
            string s;
            cin>>s;

            Solution obj;
            cout<<obj.maxPartitions(s)<<endl;
            cout<<"~"<<endl;
      }
      return 0;
    }