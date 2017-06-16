from fractions import gcd
t = input()
while(t > 0):
	t -= 1
	inp = map(int,raw_input().split())
	gc = inp[1]
	for i in range (2,inp[0]+1):
		gc = gcd(gc, inp[i])
	for i in range (1,inp[0]+1):
		print inp[i]/gc,
	print ''