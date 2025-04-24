#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
      public:
        int getSingle(vector<int> &arr) {
            // code here
            // Method:- 1 use set bit
            int result = 0;
            for(int i=0;i<32;i++){
                int sum = 0;
                
                for(int it: arr){
                    if(it & (1 << i)){
                        sum++;
                    }
                }
                
                if(sum % 3 != 0){
                    result |= (1 << i);
                }
            }
            return result;
            
            // Method:- 2 using hashmap
            unordered_map<int, int> mp;
            for(int i=0;i<arr.size();i++){
                mp[arr[i]]++;
            }
            
            for(auto it: mp){
                if(it.second == 1)return it.first;
            }
            return 0;
        }
    };

    int main(){
      string ts;
      getline(cin, ts);
      int t = stoi(ts);
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
            int ans = obj.getSingle(arr);
            cout<<ans<<endl;
            cout<<"~"<<endl;
      }
      return 0;
    }