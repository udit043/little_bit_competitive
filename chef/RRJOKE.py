t = input()
while(t > 0):
	t -= 1
	n = input()
	res = 0
	for i in range(1,n+1):
		a = map(int,raw_input().split())
		res = res ^ i
	print res