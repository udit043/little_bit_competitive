t = input()
while(t > 0):
	t -= 1
	n = input()
	b = 0
	while(n > 0):
		n -= 1
		a = input()
		b = b^a
	print b