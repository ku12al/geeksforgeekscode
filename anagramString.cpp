#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
      bool areAnagrams(string &s1, string &s2)
      {
            // Ist method
            if (s1.length() != s2.length())
                  return false;

            // IInd method
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            if (s1 != s2)
                  return false;
            return true;
      }
};

//solve by map
bool areAnagramsByMap(string &s1, string &s2)
{
      // Ist method
      if (s1.length() != s2.length())
            return false;
      unordered_map<char, int> mp;

      for (int i = 0; i < s1.length(); i++)
      {
            mp[s1[i]]++;
            mp[s2[i]]--;
      }

      for (auto it : mp)
      {
            if (it.second != 0)
            {
                  return false;
            }
      }

      return true;
}

int main()
{

      int t;

      cin >> t;

      while (t--)
      {
            string c, d;

            cin >> c >> d;
            Solution obj;
            if (obj.areAnagrams(c, d))
                  cout << "true" << endl;
            else
                  cout << "false" << endl;
            cout << "~" << endl;
      }
}