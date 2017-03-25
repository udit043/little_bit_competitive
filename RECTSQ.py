from fractions import gcd
t = input()
while(t > 0):
	t -= 1
	m,n = map(int,raw_input().split())
	gc = gcd(m,n)
	print (m*n)/(gc*gc)