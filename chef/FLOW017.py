t = input()
for i in range(t):
	num = map(int,raw_input().split())
	num.sort()
	print num[1]