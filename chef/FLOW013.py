t = input()
while(t > 0):
	t -= 1
	a,b,c = map(int,raw_input().split())
	if( (a+b+c == 180) & (a > 0) & (b > 0) & (c > 0) ):
		print 'YES'
	else:
		print 'NO'

'''
http://stackoverflow.com/questions/890128/why-are-python-lambdas-useful
from sys import stdin
 
t = int(stdin.readline())
 
while t:
	a,b,c = map(int,stdin.readline().split())
	x = lambda a,b,c:a+b+c == 180
	if x(a,b,c):
		print "YES"
	else:
		print "NO"
	t = t - 1
'''