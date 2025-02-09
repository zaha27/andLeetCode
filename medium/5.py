class Solution:
    
    def _is_palindrome(self, s: str, left: int, right: int) -> bool:
        while left < right:
            if s[left] != s[right]:
                return False
            left += 1
            right -= 1
        return True

    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        if n == 0:
            return ""

        longest = ""
        for i in range(n):
            for j in range(i, n):
                if self._is_palindrome(s, i, j):
                    if j - i + 1 > len(longest):
                        longest = s[i:j+1]
        return longest