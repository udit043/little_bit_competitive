t = input()
while(t > 0):
	t -= 1
	n = input()
	k=2;h=0;i=2
	while(1):
		h += 1
		if(n <= i):
			print h
			break;
		k += 1
		i += k