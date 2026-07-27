class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int>mp;
        vector<int> ans;
        for(auto i: nums){
            mp[i]++;
        }

        for(int i=0; i<k; i++){
            int maxfreq=-1;
            int element;

            for(auto p:mp){
                if(p.second > maxfreq){
                    maxfreq = p.second;
                    element = p.first;
                }
            }

            ans.push_back(element);
            mp.erase(element);
        }
        return ans;
    }
};