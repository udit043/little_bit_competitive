n = input()
weapons = map(int,raw_input().split())
even = 0;odd=0
for i in weapons:
	if(i % 2 == 0):
		even += 1
	else:
		odd += 1
if (even > odd):
	print 'READY FOR BATTLE'
else:
	print 'NOT READY'