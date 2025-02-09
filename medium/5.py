def is_palindrome(s, left, right):
    while left < right:
        if s[left] != s[right]:
            return False
        left += 1
        right -= 1
    return True

def longestPalindrome(s):
    n = len(s)
    if n == 0:
        return ""

    longest = ""
    for i in range(n):
        for j in range(i, n):
            if is_palindrome(s, i, j):
                if j - i + 1 > len(longest):
                    longest = s[i:j+1]
    return longest