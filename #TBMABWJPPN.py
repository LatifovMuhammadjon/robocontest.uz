n = int(input())
nums = list(map(int, input().split()))
nums.sort()
i = 0
while i < len(nums) - 2:
    if nums[i] == nums[i + 1]:
        nums.pop(i + 1)
        nums.pop(i)
    else:
        i += 1
xor_sum = 0
for num in nums:
    xor_sum ^= num

if xor_sum == 0:
    print("Draw")
elif xor_sum % 2 == 0:
    print("Alice")
else:
    print("Bob")
