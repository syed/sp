#!/usr/bin/python 

import math;
def pow ( x , n ) :
	aux = 1 
	while n > 1 :
		if n & 1 : #odd 
			aux *= x
		x*=x
		n =int (n/2)
	return x*aux 


while True   :
	inp = raw_input()
	nums = inp.split(' ')
	ne = int (nums[0])
	cd = int (nums[1])
	if ne == 0 and cd == 0 :
		break
	if cd == 0 :
		ans = 0 
	else :
		ans = int(pow(ne,cd))
	print ans

