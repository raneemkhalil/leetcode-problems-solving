class Solution:
    def my_sqrt(self, x: int) -> int:
        if x == 0 or x == 1:
            return x

        res = 0
        y = 0
        while res < x:
            y += 1
            res = y * y

        if res == x:
            return y
        else:
            return y - 1

if __name__ == "__main__":
    sol = Solution()
    print(sol.my_sqrt(0))
    print(sol.my_sqrt(1))
    print(sol.my_sqrt(2))
    print(sol.my_sqrt(4))
    print(sol.my_sqrt(5))
    print(sol.my_sqrt(9))
    print(sol.my_sqrt(10))
