class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r=s.length()-1;
        while(l<r) {
            while(isalnum(s[l])==false) l++;
            while(isalnum(s[r])==false) r--;
            if(l < r && tolower(s[l]) != tolower(s[r])) return false;
            l++;
            r--;
        }
        return true;
    }
};
