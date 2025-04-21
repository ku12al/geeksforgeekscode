#include<bits/stdc++.h>
using namespace std;

class Solution {
      public:
        int missingNum(vector<int>& arr) {
            // code here
            // Method - 1 - apply sum and find the missing element
            int n = arr.size()+1;
            int sum = 0;
            for(int s: arr){
                sum += s;
            }
            int total = n*(n+1)/2;
            // return total - sum;
            // passed only 1112 test case
            
            //Method-2 - apply xor of element
            
            int xorr = 0;
            for(int i=1;i<=n;i++){
                xorr ^= i;
            }
            
            for(int i=0;i<n-1;i++){
                xorr ^= arr[i];
            }
            return xorr;
            
        }
    };

int main(){
      int t;
      cin>>t;
      cin.ignore();
      while(t--){
            int n;
            vector<int> a;
            string input;
            getline(cin, input);
            stringstream ss(input);
            int num;
            while (ss >> num) {
                a.push_back(num);
            }

            Solution obj;
            cout<<obj.missingNum(a)<<endl;
            cout<<"~"<<endl;
      }
}