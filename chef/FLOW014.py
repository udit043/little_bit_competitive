t = input()
while(t > 0):
	t -= 1
	hrd,cc,ts = map(float,raw_input().split())

	if( (hrd > 50) & (cc < 0.7) & (ts > 5600) ):
		print '10'
	elif( (hrd > 50) & (cc < 0.7) ):
		print '9'
	elif( (cc < 0.7) & (ts > 5600) ):
		print '8'
	elif( (hrd > 50) & (ts > 5600) ):
		print '7'
	elif( (hrd > 50) | (cc < 0.7) | (ts > 5600) ):
		print '6'
	elif( (hrd <= 50) & (cc >= 0.7) & (ts <= 5600) ):
		print '5'