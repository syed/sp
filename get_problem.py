import urllib2
import os
import sys

name = sys.argv[1]


try : 
    os.mkdir(name)
    fp = open(os.path.join(name , name+".pdf"), "w")
    fp = open(os.path.join(name , name+".py"), "w")
    problem_url = "http://www.spoj.pl/problems/%s.pdf" % ( name )
    data =  urllib2.urlopen(problem_url).read()
    fp.write(data)
    fp.close()
except Exception as e:
    print e
    os.remove( os.path.join(name,name+".pdf"))
    os.rmdir(name)
