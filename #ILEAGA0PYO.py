# Taking input for the list of numbers
n, k = map(int, input().split())
nums = list(map(int, input().split()))
s = sum(nums)
if s%k != 0:
    print("NO")
    exit(0)
# Taking input for target sum and k
target = s//k

# Number of elements in the set
n = len(nums)

# Initialization
dp = [[[False] * (k + 1) for _ in range(target + 1)] for _ in range(n + 1)]

# Base case
dp[0][0][0] = True

# Dynamic Programming
for i in range(1, n + 1):
    for j in range(target + 1):
        for p in range(1, k + 1):
            if nums[i - 1] > j:
                dp[i][j][p] = dp[i - 1][j][p]
            else:
                dp[i][j][p] = dp[i - 1][j][p] or dp[i - 1][j - nums[i - 1]][p - 1]

# Check if it's possible to partition the set into k subsets with the given target sum
if dp[n][target][k]:
    print("YES")
else:
    print("NO")
