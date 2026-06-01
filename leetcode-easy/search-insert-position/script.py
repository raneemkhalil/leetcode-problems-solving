from typing import List


class Solution:
    def search_insert(self, nums: List[int], target: int) -> int:
        i: int = 0
        while i < len(nums) and nums[i] < target:
            i += 1
        return i


if __name__ == '__main__':
    sol = Solution()
    nums = [1,3,5,6]
    target = 2
    print(sol.search_insert(nums, target))