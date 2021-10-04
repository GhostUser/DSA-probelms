class Solution:
    def containsDuplicate(self, nums) -> bool:#: List[int]
        return len(nums)!=len(set(nums))
    
sol=Solution()
n=[1,2,3,4,4]
print(sol.containsDuplicate(n))