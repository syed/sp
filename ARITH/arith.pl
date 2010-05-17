#!/usr/bin/perl
#
use bignum;

$cases = <STDIN>;

sub print_res( )
{
	my $num1 = shift;
	my $num2 = shift;
	my $res = shift;
	my $opr = shift;

	$len = length($num1);
	if ( $len < length($num2) + 1  )
	{
		$len = length($num2) + 1 ;
	}
	if ( $len < length($res) )
	{
		$len = length($res);
	}

	#print first number 
	for ( $i = 0 ; $i<$len - length($num1) ; $i++)
	{
		print " ";
	}
	print "$num1\n" ;
	for ( $i = 0 ; $i<$len - ( length($num2) +1 ); $i++)
	{
		print " ";
	}
	print "$opr$num2\n";
	for( $i = 0 ; $i<$len ; $i++)
	{
		print "-";
	}
	print "\n";
	for ( $i = 0 ; $i<$len - ( length($res) ); $i++)
	{
		print " ";
	}
	print "$res\n";
}

sub print_with_spaces( )
{
	$lenx = shift;
	$str = shift;
	$len2 = length($str);
	#print "str : $str \n";
	for ( $i =0 ;$i< $lenx-$len2 ; $i++ )
	{
		print " ";
	}
	print $str,"\n";
}

while ($cases-- )
{
	chomp($line = <STDIN>);
	$line  =~  /(\d+)([\+\-\*])(\d+)$/;
	$num1 = $1;
	$num2 = $3;
	$opr  = $2;
	chomp($num2);

	if ( $opr eq "+" )
	{
		$res = $num1 + $num2 ;
		$opr = "+";
		&print_res($num1,$num2,$res,$opr);

	}
	elsif ( $opr eq "-" )
	{
		$res = $num1 - $num2;
		$opr = "-";
		&print_res($num1,$num2,$res,$opr);
	}
	elsif ( $opr eq "*")
	{
		$res = $num1*$num2;
		$len = length($res);
		if ( $len < length($num1) )
		{
			$len = length($num1) ;
		}
		if ( $len < length($num2) +1 )
		{
			$len = length($num2) + 1 ;
		}
		&print_with_spaces( $len , "$num1" );
		&print_with_spaces( $len , "*$num2" );
		@vals = split   // , $num2 ;
		$vallen = @vals;
		if ( $vallen > 1 ) 
		{
			$len2 = length($num1);
		 	if ( $len2 < length($num2) +1 )
			{
				$len2 = length($num2) +1 ;
			}
			$dashes = "";
			for ( $i = 0 ; $i< $len2 ; $i++ )
			{
				$dashes .="-";
			}
			&print_with_spaces( $len , $dashes );
			$j=0 ;
			foreach $val (reverse @vals)
			{
				$tmp = $val*$num1;
				#print "tmp:$tmp";
				&print_with_spaces($len - $j , $tmp);
				$j++;
				#	print "len $len \n";
			}
		}
		for ( $i = 0 ; $i< $len ; $i++ )
		{
			print "-";
		}
		print "\n";	
		&print_with_spaces($len , $res );
	}
	print "\n";

}

