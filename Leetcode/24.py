class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        current_max=nums[0]
        max_end=0
        if max(nums)<0:
            return max(nums)
        else:
            for i in range(len(nums)):
                max_end+=nums[i]
                if (current_max<max_end):
                    current_max=max_end
                if (max_end<0):
                    max_end=0
        return current_max