from typing import List


class Solution:
    def remove_duplicates(self, nums: List[int]) -> int:
        k: int = 1
        for i in range(1, len(nums)):
            if nums[i] != nums[k - 1]:
                nums[k] = nums[i]
                k+=1
        return k


if __name__ == "__main__":
    sl = Solution()
    nums: List[int] = [1,1,2,2,3,4]
    print(sl.remove_duplicates(nums))
    print(nums)