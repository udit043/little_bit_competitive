def reverse(text):
	return text[::-1]

def is_palindrome(text):
	return text == reverse(text)

t = input()
while(t > 0):
	t -= 1
	l,r = map(int,raw_input().split())
	sm = 0
	for i in range(l,r+1):
		s = str(i)
		if is_palindrome(s):
			sm += i
	print sm

'''
TLE
t = input()
while(t > 0):
	t -= 1
	l,r = map(int,raw_input().split())
	sm = 0
	for i in range(l,r+1):
		rev = 0;num = i
		while(num != 0):
			rev = rev*10 + num%10
			num /= 10
		if(i == rev):
			sm += i
	print sm
'''