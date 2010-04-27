#!/usr/bin/perl
#
#
for ( $i = 0 ; $i < 10000 ; $i++ )
{
	print <<TESTCASE ;
2 2
200 400
200 1000
3 4
530 510 490
480 470 50 310
TESTCASE
}
print "0 0";

