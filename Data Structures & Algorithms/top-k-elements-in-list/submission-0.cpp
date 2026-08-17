class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      map<int, int> mp;
      vector<vector<int>> count(nums.size()+1);
      vector<int> res; 
      for (int n : nums) {
        mp[n] = 1+mp[n];
      }
      for (const auto& n : mp) {
        count[n.second].push_back(n.first);
      }
      for (int i =count.size()-1;i>0;i--) {
        for(int n : count[i]) {
            res.push_back(n);
            if(res.size() == k) {
                return res;
            }
        }
      }

      return res;
    }
};
