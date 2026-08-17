class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;        
        for(const auto&s : strs ) {
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            mp[sortedS].push_back(s);
        }
        for (const auto& pairs : mp) {
            res.push_back(pairs.second);
        }
        return res;
    }
};
