class Solution:
    def length_of_last_word(self, s: str) -> int:
        length: int = 0
        list_of_strings: list[str] = s.split()
        i: int = len(list_of_strings) - 1

        while i >= 0:
            if list_of_strings[i] != " ":
                return len(list_of_strings[i])
        return length

if __name__ == '__main__':
    sol = Solution()
    print(sol.length_of_last_word("   fly me   to   the moon   "))