from typing import List

class Solution:
    def generate_valid_parenthesis(self, res: List[str], curr_string: str, closed: int, opened: int):
        if closed == 0 and opened == 0:
            res.append(curr_string)
            return
        if closed > opened:
            self.generate_valid_parenthesis(res, curr_string + ")", closed - 1, opened)
        if opened > 0:
            self.generate_valid_parenthesis(res, curr_string + "(", closed, opened - 1)

    def generate_parenthesis(self, n: int) -> List[str]:
        res: List[str] = []
        self.generate_valid_parenthesis(res, "", n, n)
        return res

if __name__ == "__main__":
    sol = Solution()
    res = sol.generate_parenthesis(4)
    print(res)