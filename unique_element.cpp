#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// User function Template for C++
class Solution {
      public:
        int findUnique(vector<int> &arr) {
            // code here
            // Method:--1 Ta solve by the map
            // unordered_map<int, int> mp;
            // for(int i=0;i<arr.size();i++){
            //     mp[arr[i]]++;
            // }
            
            // for(auto i: mp){
            //     if(i.second<2){
            //         return i.first;
            //     }
            // }
            // return -1;
            
            // Method: 2 -- by the help of sum of xor element
            
            int sum = 0;
            for(int i: arr)sum^=i;
            return sum;
        }
    };

    int main(){
      int t;
      cin>>t;
      cin.ignore();
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
            cout<<obj.findUnique(arr)<<endl;
            cout<<"~"<<endl;
      }
      return 0;
    }

    