t = input()
while(t > 0):
	t -= 1
	s1 = raw_input()
	s2 = raw_input()
	qb=0;qs=0;same=0;dif=0;
	for i in range (0,len(s1)):

		if(s1[i] == s2[i]):
			same += 1
			if(s1[i] == '?'):
				qb += 1
		
		if(s1[i] != s2[i]):
			dif += 1
			if( (s1[i] == '?') | (s2[i] == '?') ):
				qs += 1

	print len(s1)-same-qs,
	print dif+qb