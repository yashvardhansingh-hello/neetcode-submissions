class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        n = len(nums)
        res = []
        for i in range(n):
            if nums[i]>0: return res
            if i>0 and nums[i-1]==nums[i]: continue
            l, r= i+1, n-1
            while l<r:
                add = nums[l]+nums[r]+nums[i]
                if add>0:
                    r-=1
                elif  add<0:
                    l+=1
                else:
                    res.append([nums[l], nums[r], nums[i]])
                    l+=1
                    r-=1
                    while l<r and nums[l]==nums[l-1]: l+=1
        return res
