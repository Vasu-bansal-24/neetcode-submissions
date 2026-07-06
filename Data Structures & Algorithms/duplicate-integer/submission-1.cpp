class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> result;
        for(auto i : nums){
            if(result.find(i) != result.end()){
                return true;
            }
            result.insert(i);
        }
        return false;
    }
};