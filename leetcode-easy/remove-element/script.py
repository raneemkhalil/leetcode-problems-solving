from typing import List


class Solution:
    def remove_element(self, nums: List[int], val: int) -> int:
        k: int = 0
        for i in range(len(nums)):
            if nums[k] != val:
                k+=1
                continue
            if nums[i] == val:
                continue

            temp: int = nums[k]
            nums[k] = nums[i]
            nums[i] = temp
            k+=1
        return k


if __name__ == "__main__":
    sol = Solution()
    nums = [0,1,2,2,3,0,4,2]
    val = 2
    print(sol.remove_element(nums, val))
    print(nums)
