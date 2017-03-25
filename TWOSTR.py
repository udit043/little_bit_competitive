t = input()
while(t > 0):
	f = 0;t -= 1
	s1 = raw_input()
	s2 = raw_input()
	for i in range(0,len(s1)):
		if((s1[i] == '?') | (s2[i] == '?')):
			continue
		if(s1[i] != s2[i]):
			f = 1
			break;
	if(f == 1):
		print 'No'
	else:
		print 'Yes'