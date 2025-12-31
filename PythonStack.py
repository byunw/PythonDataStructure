#property: last in first out
stack = []

#push
stack.append('A')
stack.append('B')
stack.append('C')
stack.append('D')

#pop
character1 = stack.pop()

#peek
character2 = stack[-1]

#printing size of the current stack
print(len(stack))






