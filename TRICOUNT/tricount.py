#!/usr/bin/python


cases_s = raw_input()
cases = int(cases_s)

while cases : 
	inp = raw_input()
	n = int (inp)
	if n == 1 : 
		print "1"
	else : 
		sum=(1<<(n+1)) - n  
		if n%2 == 0 : 
			print sum-1
		else:
			print sum 
	cases -=1



