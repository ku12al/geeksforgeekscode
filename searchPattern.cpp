#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  vector<int> lpsArray(string& pattern){
      int i=0, n = pattern.size();
      vector<int> lps(n+1, 0);
      for(int i=1;i<n;i++){
          int j = lps[i-1];
          while(j>0 && pattern[i] != pattern[j]) j = lps[j-1];
          if(pattern[i] == pattern[j])j++;
          lps[i]=j;
      }
      return lps;
  }
    vector<int> search(string& pat, string& txt) {
        // code here
        int m = pat.length();
        int n = txt.length();
        
        vector<int> patMatch, lps = lpsArray(pat);
        
        int i=0;
        int j=0;
        while(i<n){
            if(pat[j]==txt[i]){
                i++;
                j++;
            }
            if(j==m){
                patMatch.push_back(i-j);
                j=lps[j-1];
            }else if(i<n && pat[j]!=txt[i]){
                if(j!=0){
                    j = lps[j-1];
                }else{
                    i++;
                }
            }
            
        }
        return patMatch;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}