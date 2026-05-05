from collections import defaultdict
from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indexes = defaultdict(int)
        for idx, num in enumerate(nums):
            value = target - num
            if value in indexes:
                return [indexes[value], idx]
            indexes[num] = idx
        return []


if __name__ == '__main__':
    sol = Solution()
    nums = [3, 7, -3, 15]
    target = 0
    print(sol.twoSum(nums, target))