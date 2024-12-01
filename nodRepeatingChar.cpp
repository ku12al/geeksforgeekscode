#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char, int> mp;
        for(char c: s){
            mp[c]++;
        }
        
        for(char it: s){
            if(mp[it]==1){
                return it;
            }
        }
        
        return '$';
    }
};


int main() {

    int T;
    cin >> T;

    while (T--) {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonRepeatingChar(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}