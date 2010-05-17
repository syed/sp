#!/usr/bin/python 

#stupid perl not taking long ints
# I love python  :)
import re

def print_with_space( val , nos ) :
	len2 =  len(val) 
	final = " "*(nos-len2)
	final= final+val
	print final 


regex = re.compile(r"(\d+)([\+\-\*])(\d+)$")
cases = int (raw_input())
while cases :
	line = raw_input()
	match = regex.match(line)
	num1 = match.group(1)
	num2 = match.group(3)
	opr  = match.group(2)

#	print "num1 :"  , num1
#	print "num2 :"  , num2
#	print "opr :"  , opr 

	if opr == "+" :
		res = str(int(num1) + int(num2))

		len1 = len(res)
		if len1  < len(num2) + 1  :
			len1 = len(num2) + 1

		print_with_space( num1 , len1 )
		print_with_space( "+" + num2 , len1 )
		print_with_space( "-"*len1 , len1 )
		print_with_space(res , len1 )
	if opr == "-" :
		res = str(int(num1) - int(num2))

		len1 = len(res)
		if len1  < len(num1)   :
			len1 = len(num1) 
		if len1 < len(num2) + 1 :
			len1 = len(num2) + 1 

		len2 = len(res)
		if len2 < len(num2) + 1 :
			len2 = len(num2)+1 
		
		print_with_space( num1 , len1 )
		print_with_space( "-" + num2 , len1 )
		print_with_space( "-"*len2 , len1 )
		print_with_space(res , len1 )
	if opr == "*" :

		
		res = str(int(num1) * int(num2))
		len1 = len(res)
		if len1  < len(num1)   :
			len1 = len(num1) 
		if len1 < len(num2) + 1 :
			len1 = len(num2) + 1 

		print_with_space(num1,len1 )
		print_with_space("*"+num2 , len1 )
		if ( len(num2) == 1 ) :
			len2 = max(len(num2)+1 , len(res) )
			print_with_space("-"*len2 , len1 )
			print_with_space(res , len1 )
		else :
			x = len1
			num1_int = int(num1)
			dlen = max ( len(num2)+1 , len( str( num1_int * int(num2[0]) ) ) )
			print_with_space("-"*dlen , len1 )
			for val in num2[::-1] :
				tmp = str( int(val) * num1_int)
				print_with_space(tmp , x ) 
				x-=1

			#dlen = max( len(res) , len(num2) + 1 )	
			#if  num1_int == 0 :
			#	print_with_space( "-"*len(num2) , dlen ) 
			#else :
			print_with_space( "-"*len(res) , dlen ) 
			print_with_space( res , len1 ) 

	print "\n",
	cases-=1


