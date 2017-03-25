t = int(raw_input())
numbers = []
for i in range(0,t):
	num = int(raw_input())
	numbers.append(num)
numbers.sort()
for i in numbers:
	print "%d" % i

'''t = input()
numbers = []
for i in range(0,t):
	num = input()
	numbers.append(num)
numbers.sort()
i=0
for i in range(0,t):
	print numbers[i]'''