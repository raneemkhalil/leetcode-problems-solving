class Solution:
    def my_sqrt(self, x: int) -> int:
        s: int = 1
        e: int = x
        while s <= e:
            y: int = s + (e - s) // 2
            if y > x // y:
                e = y - 1
            else:
                s = y + 1
        return e

if __name__ == "__main__":
    sol = Solution()
    print(sol.my_sqrt(8))
    print(sol.my_sqrt(5))
    print(sol.my_sqrt(3))
    print(sol.my_sqrt(1))
    print(sol.my_sqrt(0))
    print(sol.my_sqrt(10))