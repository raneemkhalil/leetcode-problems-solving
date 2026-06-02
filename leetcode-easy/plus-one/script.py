from typing import List


class Solution:
    def plus_one(self, digits: List[int]) -> List[int]:
        for i in range(len(digits) - 1, -1, -1):
            if digits[i] < 9:
                digits[i] += 1
                return digits
            digits[i] = 0
        digits.insert(0, 1)
        return digits

if __name__ == "__main__":
    sol = Solution()
    print(sol.plus_one([1]))
    print(sol.plus_one([1, 2, 3]))
    print(sol.plus_one([1, 2, 9]))
    print(sol.plus_one([1, 9, 9]))
    print(sol.plus_one([9, 9, 9]))