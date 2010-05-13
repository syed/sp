#!/usr/bin/perl
#
while (1)
{
	$len = <STDIN>;
	if ( $len == 0 )
	{
		last;
	}
	$line = <STDIN> ;
	chomp($line);
	@vals = split  ( /\s+/ , $line ) ;
	@stack = ();
	push @stack , 9999;
	$num = @vals;
	$curr = 1;
	@res = ();
	$i=0;	
	$flag = 0 ;
	while ($curr <=$num )
	{
		#print " i $i vals i $vals[$i] curr $curr \n";
		if ( $vals[$i] != $curr )
		{
			if ( $stack[-1] == $curr )
			{
				push @res , $stack[-1] ;
				$pval = pop @stack;
				#print "poping $pval\n";
				$curr++;
				#print "resu @res \n";
			}
			else 
			{
				while ( $vals[$i] != $curr and  $i<$num )
				{
					if ( $vals[$i] < $stack[-1] )
					{

						#print "pushing $vals[$i]\n";
						push @stack , $vals[$i] ;
						$i++;
					}
					else
					{
						#got an error here 
						print "no\n";
						$flag = 1 ;
						last;
					}
				}
				push @res , $curr;
				#print "res @res\n";
				$i++;
				$curr++;
			}
		}
		else
		{
			push @res , $vals[$i];
			#print "Res @res \n";
			$curr ++;
			$i++;
		}
		if ( $flag == 1 )
		{
			last ;
		}

	}
	if ( $flag == 0 )
	{
		print "yes\n";
	}
}
			
				

		

