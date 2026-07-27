class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;

        for (auto c : strs) {
            string key = c;
            sort(key.begin(), key.end());
            mp[key].push_back(c);
        }

        for (auto e : mp) {
            result.push_back(e.second);
        }

        return result;
    }
};
