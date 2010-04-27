#!/usr/bin/perl

$cases = <STDIN>;

sub trim 
{
	$str = shift;
	$str =~ s/^\s+//;
	$str =~ s/\s+$//;
	return $str;
}

while ( $cases-- ) 
{
	$blank = <STDIN>;
	$line = <STDIN>;
	@vals = split ( /(\[0-9]+|[\+\-\*\/\=])/ , $line );
	$count = @vals;

	$ans = trim  $vals[0] ;
	for ( $i = 1; $i < $count ; $i++ )  
	{
		$val = trim  $vals[$i] ;
		
		if ( $val eq "=" )
		{
			print $ans ."\n";
			last;
		}
		elsif ( $val eq "+" )
		{
			$ans += $vals[$i+1];
			$i++;
		}
		elsif ( $val eq "-" )
		{
			$ans -= $vals[$i+1];
			$i++;
		}
		elsif ( $val eq "*" )
		{
			$ans *= $vals[$i+1];
			$i++;
		}
		elsif ( $val eq "/" )
		{
			$ans = int ( $ans/ $vals[$i+1]) ;
			$i++;
		}
	}
}	
