#!/usr/bin/python
import re ;


regex = re.compile( r"(.*)([\+,\-,\=])(.*)" )
global_count = 0 
while True : 
	line = raw_input()
	res ={}
	global_count+=1
	if line == '#':
		break
	
	for loge in line.split(',') :
		m = re.match( regex , loge ) 
		ent = m.group(1)
		opr = m.group(2)
		per = m.group(3)
		#print " Ent : " ,ent   , " Opr :" , opr , "Per : " , per
		for e in list(ent) :
			try :
				res[e]
			except  KeyError :
				res[e]=set()

			if opr == '+' :
				for p in list(per) :
					res[e].add(p)
			if opr == '-' :
				for p in list(per) :
					try : 
						res[e].remove(p)
					except KeyError :
						pass
			if opr== '=' :
				res[e].clear()
				for p in list(per) :
					res[e].add(p)

		
	rem = []
	for i in res :
		if not res[i]:
			rem.append(i)

	for i in rem :
		res.pop(i)

	rl = list(res)
	rl.sort()
	count = len( rl ) 
	i = 1 
	if count == 0 : 
		op = str(global_count)+":"
		print op
		continue 

	ans =	rl[0] 
	tmp = list (res[rl[0]])
	tmp.sort()
	prev = ''.join ( str(n) for n in tmp )
	
	while i < count : 
		key = rl[i]
		tmp = (list(res[key]))
		tmp.sort()
		val = ''.join ( str(n) for n in tmp )
		#print "key : " , key ,"val : " , val , "prev :" , prev , "ans :" ,ans
		if prev == val : # same as last  add only key
			ans+=key
		else :
			ans+=prev
			ans+=key
			prev = val
		i+=1

	ans+=prev

	op = str(global_count)+":"+str(ans)
	print op	


