t = input()
while(t > 0):
	t -= 1
	n = input()
	a = map(int,raw_input().split())
	res = 0
	for i in range(0,n):
		prod=1;sm=0;
		for j in range(i,n):
			prod = prod * a[j]
			sm = sm + a[j]
			if(prod == sm):
				res += 1;
	print res