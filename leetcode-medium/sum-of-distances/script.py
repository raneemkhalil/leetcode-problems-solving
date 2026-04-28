from collections import defaultdict
from typing import List, Dict


class Solution:
    def get_distance(self, nums: List[int]) -> List[int]:
        distance = []
        freq_indexes: Dict[int, int] = {}
        sum_indexes: Dict[int, int] = {}

        for index, num in enumerate(nums):
            if num not in freq_indexes:
                freq_indexes[num] = 0
            if num not in sum_indexes:
                sum_indexes[num] = 0

            distance.append(abs((index * freq_indexes[num]) - sum_indexes[num]))
            freq_indexes[num] += 1
            sum_indexes[num] += index
        freq_indexes.clear()
        sum_indexes.clear()

        i = len(nums) - 1
        while i >= 0:
            val = nums[i]
            if val not in freq_indexes:
                freq_indexes[val] = 0
            if val not in sum_indexes:
                sum_indexes[val] = 0

            distance[i] += abs((i * freq_indexes[val]) - sum_indexes[val])
            freq_indexes[val] += 1
            sum_indexes[val] += i
            i -= 1

        return distance


if __name__ == "__main__":
    solution = Solution()
    nums = [1,3,1,1,2]
    res: list = solution.get_distance(nums)
    print(res)