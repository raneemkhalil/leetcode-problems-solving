class Solution:
    def length_of_last_word(self, s: str) -> int:
        list_of_strings: list[str] = s.split()
        last_word: int = len(list_of_strings) - 1
        return len(list_of_strings[last_word])

if __name__ == '__main__':
    sol = Solution()
    print(sol.length_of_last_word("   fly me   to   the moon    "))