stack = [3,4,5]
stack.append(6)
stack.append(7)
stack.pop()

assert len(stack) == 4
value = stack.pop()
assert len(stack) == 3
assert value == 6




