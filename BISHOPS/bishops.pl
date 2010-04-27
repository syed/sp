#!/usr/bin/perl
while ( $n = <STDIN> ) 
{
	if ( $n == 1 )
	{
		print "1\n";
	}
	else
	{
		print 2*$n-2,"\n";
	}
}
