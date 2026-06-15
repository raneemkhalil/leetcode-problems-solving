from math import floor
from typing import List
import math

class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        left: int = 0
        i: int = 0
        full_size: int = n + m
        right: int = m - 1
        if not nums1:
            nums1 += nums2
            return
        while i < len(nums2):
            val: int = nums2[i]
            x = (right - left) // 2
            # mid_index: int = left + math.floor(x) if x >= 0 else math.ceil(x) # different from c++ (// opr. get the floor int / opr. get float num)
            mid_index: int = left + x if x >= 0 else left + x + 1
            mid_value = nums1[mid_index]
            if val >= mid_value:
                left = mid_index + 1
            else:
                right = mid_index - 1

            if right < left and not nums1[full_size - 1]:
                nums1.pop()

            if not nums1:
                nums1 += nums2
                return
            if right < left:
                nums1.insert(right + 1, val)
                i += 1
                right = m
                m += 1


if __name__ == '__main__':
    sol = Solution()
    nums1 = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
    nums2 = [-50,-50,-48,-47,-44,-44,-37,-35,-35,-32,-32,-31,-29,-29,-28,-26,-24,-23,-23,-21,-20,-19,-17,-15,-14,-12,-12,-11,-10,-9,-8,-5,-2,-2,1,1,3,4,4,7,7,7,9,10,11,12,14,16,17,18,21,21,24,31,33,34,35,36,41,41,46,48,48]
    # nums1 = [0]
    # nums2 = [1]
    sol.merge(nums1, 0, nums2, 63)
    print(nums1)
