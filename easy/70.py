import math

class Solution:
    def climbStairs(self, n: int) -> int:
        sqrt5 = math.sqrt(5)
        phi = (1 + sqrt5) / 2
        return int((phi**(n + 1) - (1 - phi)**(n + 1)) / sqrt5)