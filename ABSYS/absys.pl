#!/usr/bin/perl
#
#
#
sub trim($)
{
	my $string = shift;
	$string =~ s/^\s+//;
	$string =~ s/\s+$//;
	return $string;
}

$cases = <STDIN>;

while($cases--)
{
	$blank = <STDIN>;
	$line = <STDIN>;
	@vals = split ( /(\+|=)/ , $line );
	$num1 = trim $vals[0];
	$num2 = trim $vals[2];
	$num3 = trim $vals[4];
	chomp($num1) ;
	chomp($num2) ;
	chomp($num3) ;
	if ( $num1 =~  /machula/ )
	{
		$num1 = $num3 - $num2;
	}
	if ( $num2 =~  /machula/ )
	{
		$num2 = $num3 - $num1;
	}
	if ( $num3 =~  /machula/ )
	{
		$num3 = $num2 +  $num1;
	}
	print "$num1 + $num2 = $num3\n";
}

