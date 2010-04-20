#!/usr/bin/python 
#solved using sterling's thorem for approximation of factorial 

import math 

cases = int ( raw_input() )

while cases : 
	n = int ( raw_input() )
	if n == 0 or n == 1 :
		print "1"
	else :
		a =(0.5)* math.log10( 2*math.pi*n )
		b = n*math.log10( n/math.e ) 
		print   int (a+b)+1
	cases -=1

