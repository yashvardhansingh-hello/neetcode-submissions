class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums)<2:
            return len(nums)
        nums.sort()
        maxL = 0
        q = 1
        for i in range(len(nums)-1):
            if nums[i]==nums[i+1]:
                continue
            elif nums[i]==nums[i+1]-1:
                q+=1
            else:
                if q>maxL: maxL=q
                q=1
        return max(q, maxL)
                