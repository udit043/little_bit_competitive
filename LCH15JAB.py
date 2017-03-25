t = input()
while(t > 0):
	t -= 1;sm=0;f=0;
	count = []
	for i in range(26):
		count.append(0)

	s = raw_input()
	for i in range (len(s)):
		count[ord(s[i])-97] += 1

	sm = sum(count)
	for i in range(26):
		if(count[i] == sm-count[i]):
			f = 1
			break

	if (f == 1):
		print 'YES'
	else:
		print 'NO'


# >>> chr(97)
# 'a'
# >>> ord('a')
# 97