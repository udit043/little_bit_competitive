t = input()
while(t > 0):
	t -= 1
	n,k = map(int,raw_input().split())
	a = map(int,raw_input().split())
	res=0;sub=0;add=0;
	for i in range (n):
		sub = a[i] % k;
		add = k - sub;

		if(a[i] >= k):
			res = res + min(sub, add)
		else:
			res = res + add
	print res