class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        if sum(nums) == x:
            return len(nums)

        dic = {0:-1}
        target = sum(nums)-x
        cum_sum, max_window = 0, 0
        
        for k,v in enumerate(nums):
            cum_sum += v
            dic[cum_sum] = k
            if (cum_sum-target) in dic:
                max_window = max(max_window, k-dic[cum_sum-target])
        
        return len(nums)-max_window if max_window>0 else -1
