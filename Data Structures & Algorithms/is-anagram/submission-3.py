class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        lst = [0 for _ in range(26)]
        for i in s:
            lst[ord(i)-ord('a')]+=1
        for i in t:
            lst[ord(i)-ord('a')]-=1
        for i in lst:
            if i!=0:
                return False
        return True