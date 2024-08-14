class Solution:
    def search(self, nums: List[int], target: int) -> int:
        x=len(nums)
        s=0
        e=x-1
        while(s<=e):
            m=int(s+(e-s)/2)
            if nums[m]==target:
                return m
            elif nums[m]>target:
                e=m-1
            elif nums[m]<target:
                s=m+1
        return -1