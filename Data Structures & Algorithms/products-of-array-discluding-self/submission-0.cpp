class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
        int mul = 1;
        for (int i=1;i<nums.size();i++) {
            mul = mul*nums[i-1];
            res[i] = mul;
        }
        mul = 1;
        for(int i=nums.size()-2;i>=0;i--){
            mul = mul*nums[i+1];
            res[i] = mul*res[i];
        }
        return res;
    }
};
