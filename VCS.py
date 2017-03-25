t = input()
while(t > 0):
	t -= 1; ans = []; res1 = 0; res2 = 0;
	n,m,k = map(int,raw_input().split())
	m1 = map(int,raw_input().split())
	k1 = map(int,raw_input().split())

	for i in range(n):
		ans.append(0)

	for i in range(m):
		ans[m1[i]-1] += 1

	for i in range(k):
		ans[k1[i]-1] +=1

	for i in range(n):
		if(ans[i] == 2):
			res1 += 1
		if(ans[i] == 0):
			res2 += 1

	print res1,
	print res2 

'''
2
7 4 6
1 4 6 7
1 2 3 4 6 7
4 2 2
1 4
3 4

'''