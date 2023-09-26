class Solution {
public:
    string removeDuplicateLetters(string s) {
      vector<int> last(26 , 0);
      for(int i = 0 ; i<s.length() ; i++)
      {
          last[s[i]-'a']++;
      }

      string ans = "";
      vector<bool> vis(26 , 0);

      for(int i = 0 ; i<s.length() ; i++)
      {
            last[s[i]-'a']--;
          if(vis[s[i]-'a'])
          {
              continue;
          }
           while(!ans.empty() && ans.back() > s[i]  && last[ans.back()-'a']>0)
              {
                vis[ans.back()-'a'] = 0;
                ans.pop_back();
              }
              ans.push_back(s[i]);
              vis[s[i]-'a'] = 1;
          
      }

      return ans;
    }
};