
class Solution:
    def romanToInt(self, s: str) -> int:
        roman_int_mapping: dict = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000,
        }
        result: int = 0
        i: int = 0
        while i < len(s):
            j: int = i + 1
            result0: int = 0
            if not s[i] in roman_int_mapping:
                return 0

            num: int = roman_int_mapping[s[i]]
            num2: int = roman_int_mapping[s[j]] if j < len(s) else 0

            if num >= num2:
                result += num
            else:
                result0 += num2 - num
                i += 1

            if result0 > result:
                result = result0 - result
            else:
                result += result0

            i += 1
        return result

if __name__ == '__main__':
    sl = Solution()
    s = 'MCMXCIV'
    result = sl.romanToInt(s)
    print(result)