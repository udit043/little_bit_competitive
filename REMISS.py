t = input()
while(t > 0):
	t -= 1
	a,b = map(int,raw_input().split())
	print max(a,b)
	print a+b