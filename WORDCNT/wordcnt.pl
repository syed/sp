#!/usr/bin/perl
#
$cases = <STDIN>;

while ( $cases-- )
{
	$line = <STDIN>;
	chomp($line);
	@words = split ( /\s+/ , $line ) ;
        $max_count = 1 ;
        $num = @words ;
        $i = 0  ;
        $prev_len = length $words[0];

        $x = $prev_len;
        while ($i < $num )
	{
                $count = 0 ;
                while ($i < $num )
		{
                        $x = length($words[$i]);
                        if ( $x == $prev_len)
			{
                                $count+=1;
                                $i+=1;
			}
                        else  
			{
                                last;
			}
		}

                $prev_len=$x;
                if ($count > $max_count ) 
		{
                        $max_count = $count ;
		}
	}
        print $max_count,"\n";
	
}
