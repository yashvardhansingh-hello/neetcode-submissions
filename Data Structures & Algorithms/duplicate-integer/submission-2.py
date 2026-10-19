class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        if len(nums)==0:
            return False
        prev = None
        for i in nums:
            if i==prev:
                return True
            prev=i
        return False

        