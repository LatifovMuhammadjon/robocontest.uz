k, n = map(int, input().split())
a = list(map(int, input().split()))
sum = 0

# Calculate initial sum
for num in a:
    sum += num

# Adjust sum for multiple rounds
sum *= n // k

# Sort the list in descending order
a.sort(reverse=True)

# Add remaining elements for the last round
for i in range(n % k):
    sum += a[i]

print(sum)
