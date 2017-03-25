t = input()
while (t > 0):
	t -= 1
	n = input()
	numbers = map(int,raw_input().split())
	numbers.sort()
	print numbers[0]+numbers[1]