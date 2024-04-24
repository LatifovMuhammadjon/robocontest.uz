k = int(input())
print(" ".join(i[::-1] if len(i) > k else i for i in input().split()))