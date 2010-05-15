#!/usr/bin/python
table = {}
def find_val(num , length ) :
	if num == None :
		return 0
	if num in table :
		print "found " , num 
		return table[num]
	
	if length == 1 :
		table[num] = 1
		return 1 
	
	elif length == 2  :
		number  = int(num[0])*10 + int(num[1])
		if number==10 or number == 20 :
			table[num]=1
			return 1 
		elif number>=11 and number <=26 :
			table[num] = 2
			return 2
		else :
			table[num]=1
			return 1 
	else :
		
		first  = num[0]
		rest = num[1:]
		if rest[0] == '0' :
			rest = None 
		second = int(num[0])*10 + int (num[1])
		tot = 0
		
		if length > 2 : 
			rest2   = num[2:]
			if rest2[0] == '0' :
				rest2 = None 
		if second >=1 and second <=26 :
			tot  = find_val(rest2,length-2) + find_val(rest,length-1)
		else :
			tot = find_val(rest,length-1)

		#print "num :" , num , "tot " , tot
		table[num]=tot
		#print table
		return tot

while True : 
	num = raw_input()
	table = {}
	if num == 0 :
		break
	print find_val(num , len(num) )

		
