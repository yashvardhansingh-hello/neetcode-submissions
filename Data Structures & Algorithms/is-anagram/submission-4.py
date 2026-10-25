class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        mp = [0 for _ in range(26)]
        for c in s:
            mp[ord(c)-ord('a')]+=1
        for c in t:
            mp[ord(c)-ord('a')]-=1
        for n in mp:
            if n:
                return False
        return True