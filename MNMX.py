t = input()
while(t > 0):
	t -= 1
	n = input()
	numbers = map(int,raw_input().split())
	mn = numbers[0]
	for i in range(1,len(numbers)):
		mn = min(mn,numbers[i])
	print mn*(n-1)