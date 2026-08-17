class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> countAlp(26, 0);
        for (int i=0;i<s.length();i++){
            countAlp[s[i]-'a']++;
            countAlp[t[i]-'a']--;
        }
        for (int c : countAlp) {
            if(c!=0) return false;
        }
        return true;

    }
};
