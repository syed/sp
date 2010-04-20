#!/usr/bin/python
import sys 
while  True:
	try :
		str =  raw_input() 
	except EOFError : 
		sys.exit(0)

	if not str : 
		break 
	n = int(str)
	if n == 1 :
		print "1"
	else: 
		print 2*n-2 
