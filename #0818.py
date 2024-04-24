def trunc(x: float):
    return x-x%0.5

def ceil(x: float):
    if x%0.5 >= 0.25:
        return trunc(x) + 0.5
    return trunc(x)

writing = trunc(sum(map(float, input().split()))/4)
speaking = trunc(sum(map(float, input().split()))/4)
listening = float(input())
reading = float(input())
print(ceil((writing+speaking+listening+reading)/4))