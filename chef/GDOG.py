t = input()
for i in range (t):
	n,k = map(int,raw_input().split())
	mx=0
	for i in range (k,1,-1):
		mx = max(mx,n%i)
	print mx

'''
t = input()
for i in range (t):
	n,k = map(int,raw_input().split())
	mx=0
	for i in range (2,k+1):
		mx = max(mx,n%i)
	print mx
'''