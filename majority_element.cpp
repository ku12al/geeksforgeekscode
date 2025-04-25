#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
      public:
        int majorityElement(vector<int>& arr) {
            // code here
            // for(int i=0;i<arr.size();i++){
            //     int count = 0;
            //     for(int j=i;j<arr.size();j++){
            //         if(arr[i]==arr[j]){
            //             count++;
            //         }
            //     }
            //     if(count > arr.size()/2)return arr[i];
            // }
            // return -1;
            
            
            unordered_map<int, int> mp;
            for(int i=0;i<arr.size(); i++){
                mp[arr[i]]++;
            }
            
            
            for(auto &it: mp){
                if(it.second > arr.size()/2)return it.first;
            }
            return -1;
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
            int ans = obj.majorityElement(arr);
            cout<<ans<<endl;
            cout<<"~"<<endl;
      }
      return 0;
    }