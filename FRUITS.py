t = input()
while(t > 0):
	t -= 1
	n,m,k = map(int,raw_input().split())
	dif = abs(n-m)
	if(k >= dif):
		print '0'
	else:
		print dif-k