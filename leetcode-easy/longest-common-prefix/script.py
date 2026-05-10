from typing import List


class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        sub: str = ""
        min_size = min(list(map(len, strs)))

        for c in range(min_size):
            temp = ""
            r: int = 0
            while r < len(strs):
                ch = strs[r][c]
                if temp and temp != ch:
                    return sub
                if temp:
                    r += 1
                    continue
                temp = ch
            sub += strs[r - 1][c]
        return sub

if __name__ == '__main__':
    sl = Solution()
    print(sl.longestCommonPrefix(["flower","flow","flight"]))