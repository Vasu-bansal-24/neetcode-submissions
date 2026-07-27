class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n = s.size();
      int max_len = 0;
      unordered_set<char> ch;
      int l = 0;

      for(int r=0; r<n; r++){
        if(ch.count(s[r]) == 0){
            ch.insert(s[r]);
            max_len = max(max_len, r-l+1);
        }else{
            while(ch.count(s[r])){
                ch.erase(s[l]);
                l++;
            }
            ch.insert(s[r]);
        }
      }
      return max_len;
    }
};