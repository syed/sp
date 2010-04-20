#!/usr/bin/python 


def fact (num):
	if num == 0 or num == 1 : 
		return 1
	ret = 1 
	while num : 
		ret = ret*num 
		num-=1
	return ret 


cases = int ( raw_input())

while cases :
	n = int ( raw_input() )
	print fact( n ) 
	cases-=1 


