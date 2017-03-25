t = input()
while(t > 0):
	t -= 1
	n = input()
	n=0;y=0;ind=0
	s = raw_input()
	for i in range(0,len(s)):
		if( s[i] == 'N' ):
			n += 1
		elif( s[i] == 'Y' ):
			y += 1
		elif( s[i] == 'I' ):
			ind += 1

	if(ind != 0):
		print 'INDIAN'
	elif(y != 0):
		print 'NOT INDIAN'
	else:
		print 'NOT SURE'