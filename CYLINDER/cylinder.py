#!/usr/bin/python
import math 

while True : 
	input  = raw_input( )
	split_arr = input.split()
	w = float (split_arr[0])
	h = float (split_arr[1])

	if h == 0 and w == 0  :
		break

	x = h / (math.pi + 1 )
	if x > w : 
		x=w 
	
	vol1 = (math.pi/4)*x*x*w;

	x = w/math.pi 
	if x > h-x  : 
		x = h - x 
	vol2 = (math.pi/4)*x*x*(h-x)

	if vol2 > vol1 :
		print "%.3f" % vol2
	else:
		print "%.3f" % vol1 






