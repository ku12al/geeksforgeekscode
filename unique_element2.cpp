#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
      public:
        vector<int> singleNum(vector<int>& arr) {
            // Code here.
            // Method:- 1 using hashmap
            // map<int, int> mp;
            // for(int i=0;i<arr.size();i++){
            //     mp[arr[i]]++;
            // }
            // vector<int> ans;
            // for(auto i: mp){
            //     if(i.second == 1){
            //         ans.push_back(i.first);
            //     }
            // }
            // return ans;
            
            // Method:- 2 use set bit
            int xorr = 0;
            for(int i=0;i<arr.size();i++){
                xorr^=arr[i];
                }
                
                int right = xorr & (-xorr);
                int x = 0, y = 0;
                for(auto i: arr){
                    if(right & i){
                        x^=i;
                    }else{
                        y^=i;
                    }
                }
                
                if(x> y){
                    swap(x,y);
                }
                return {x,y};
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
            vector<int> ans = obj.singleNum(arr);
            for(auto i: ans){
                cout<<i<<" ";
            }
            cout<<endl;
            cout<<"~"<<endl;
      }
      return 0;
    }

