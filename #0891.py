s = input()
brackets = {
    "(":")",
    "{":"}",
    "[":"]"
}
stack = []
for i in s:
    if i in brackets.keys():
        stack.append(i)
    elif i in brackets.values():
        if stack and brackets[stack[-1]] == i:
            stack.pop()
        else:
            print("FALSE")
            exit(0)
print("TRUE" if not brackets else "FALSE")