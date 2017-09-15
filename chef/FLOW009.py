# multiply > division
t = input()
while(t > 0):
	t -= 1
	q,p = map(int,raw_input().split())
	if (q > 1000):
		ans = ((q*p) - (q*p*0.1))
	else:
		ans = p*q*1.00000
	print "%.6f" % ans