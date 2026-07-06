class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sp;
        for(int i = 0; i<nums.size(); i++){
            auto it = sp.find(target-nums[i]);
            if (it != sp.end()) {
                auto value1 = it->second;

                return{value1, i};
            }
            sp.insert({nums[i], i});
        }
        return {};
    }
};
