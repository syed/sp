#!/usr/bin/python 

import math

while True :
	ip = raw_input()
	vals = ip.split(' ')
	prin = float(vals[0])
	rate = float(vals[1])
	period = float(vals[2])
	if prin == 0 and rate == 0 and period == 0 :
		break


	fin = prin* pow ( ( 1 + ( rate/(100*period)) ) , period ) 
	print fin 
	
