class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ump;
        int n = nums.size();
        for (int i=0;i<nums.size();i++) {
            int x = target-nums[i];
            if(ump.contains(x)) {
                return {ump[x], i};
            }
            ump[nums[i]] = i;
        }
        return {-1, -1};
    }
};
