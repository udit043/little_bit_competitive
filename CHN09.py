#Only for C,C++,JAVA
t = input()
while(t > 0):
	t -= 1
	s = raw_input()
	a = 0
	for i in range (len(s)):
		if(s[i] == 'a'):
			a += 1
	print min(a,len(s)-a)