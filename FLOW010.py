t = input()
while(t > 0):
	t -= 1
	s = raw_input()
	if(s == 'B') | (s == 'b'):
		print 'BattleShip'
	elif(s == 'C') | (s == 'c'):
		print 'Cruiser'
	elif(s == 'D') | (s == 'd'):
		print 'Destroyer'
	else:
		print 'Frigate'