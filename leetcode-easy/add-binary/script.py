class Solution:
    def add_binary(self, a: str, b: str) -> str:
        x = '0'
        res = ""
        i = len(a) - 1
        j = len(b) - 1
        while i >= 0 or j >= 0:
            digit_a = a[i] if i >= 0 else "0"
            digit_b = b[j] if j >= 0 else "0"
            if x == "1":
                res = ("1" if not ((digit_a == "1") ^ (digit_b == "1")) else "0") + res
                x = "1" if digit_a == "1" or digit_b == "1" else "0"
            else:
                res = ("1" if (digit_a == "1") ^ (digit_b == "1") else "0") + res
                x = "1" if digit_a == "1" and digit_b == "1" else "0"
            i-=1
            j-=1
        if x == "1":
            res = x + res
        return res


if __name__ == "__main__":
    sol = Solution()
    print(sol.add_binary("11", "1"))
    print(sol.add_binary("1", "1"))
    print(sol.add_binary("10", "101"))