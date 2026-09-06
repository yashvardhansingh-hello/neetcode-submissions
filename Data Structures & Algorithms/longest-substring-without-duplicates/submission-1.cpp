class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex;
        int startIndex=0,maxLen=0;
        for (int i=0;i<s.size();i++) {
            char c=s[i];
            if(charIndex.find(c)!=charIndex.end() && charIndex[c]>=startIndex) {
                startIndex=charIndex[c]+1;
            }            
            charIndex[c]=i;
            maxLen=max(maxLen, i-startIndex+1);
        }
        return maxLen;
    }
};
