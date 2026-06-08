class Solution:
    def climb_stairs(self, n: int) -> int:
        if n <= 2:
            return n
        b: int = 2
        a: int = 1
        for i in range(3, n + 1):
            c = b + a
            a = b
            b = c
        return b


if __name__ == "__main__":
    sol = Solution()
    print(sol.climb_stairs(5))