#!/usr/bin/python 

import math 

while True : 

	inp = raw_input()
	n2 = int (inp[0] )
	n1 = int (inp[1] )
	exp = int (inp[3]) 
	if n2 == 0 and n1 == 0 and exp == 0 : 
		break 

	power = int (math.pow ( 10 , exp ) )
	num = ( n1+10*n2 ) * power

	if not (num&(num-1))  : # 2^n pos =1 
		print "1"
	else : 
		log = 1 + int (math.log( num , 2 ) )
		pos = 1 + 2*num - int( math.pow ( 2 , log ) )  
		print pos  

