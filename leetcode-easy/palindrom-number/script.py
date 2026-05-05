class Solution:
    def isPalindrome(self, x: int) -> bool:
        newNum: int = 0
        num: int = x
        while num > 0:
            newNum = newNum * 10 + num % 10
            num = num // 10
        return newNum == x

if __name__ == '__main__':
    sl = Solution()
    x = 31213
    print(sl.isPalindrome(x))