class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ump;
        for (int i=0;i<nums.size();i++) {
            ump[target-nums[i]] = i;
        }
        vector<int> res = {-1, -1};
        for (int i=0;i<nums.size();i++) {
            if(ump.find(nums[i]) != ump.end() && ump[nums[i]] != i) {
                res[0] = i;
                res[1] = ump[nums[i]];
                return res;
            }
        }
        return res;
    }
};
