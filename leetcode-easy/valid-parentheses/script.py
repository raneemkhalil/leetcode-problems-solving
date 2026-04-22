class Solution:
    def isValid(self, s: str) -> bool:
        stack: list = []

        for char in s:
            if not stack and (char == '(' or char == '[' or char == '{'):
                stack.append(char)
            elif not stack:
                return False
            else:
                ch = stack.pop()
                if (char == ')' and ch == '(') or (char == ']' and ch == '[') or (char == '}' and ch == '{'):
                    continue
                else:
                    stack.append(ch)
                    stack.append(char)
        return stack == []

if __name__ == '__main__':
    sol = Solution()
    s = '[)]'
    print(sol.isValid(s))