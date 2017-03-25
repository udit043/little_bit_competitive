test = 1
while(test):
	t = int(input())
	if(t == 0):
		test = 0
		break
	flag = 0
	elements = map(int,raw_input().split())
#	elements = []
#	for i in range(0,t):
#		number = input()
#		elements.append(number)
	for i in range(0,t):
		if(i+1 != elements[elements[i]-1]):
			flag = 1
			break;
	if (flag == 1):
		print 'not ambiguous'
	else:
		print 'ambiguous'