#include<stdio.h>
#include<math.h>
typedef unsigned long long ulong ;

int main()
{

	ulong cases;
	ulong num , i ,sum;
	scanf("%llu",&cases);
	while(cases--)
	{
		sum = 0;
		scanf("%llu" , &num);
		int sqrt_n = sqrt(num);
		for ( i = 1 ;  i<= sqrt_n ; i++ )
		{
			if( num %i == 0 )
			{
				if ( i == num/i )
				{
					sum+=i;
				}
				else
				{
					sum+=i+num/i;
				}
			}

		}
		printf("%llu\n",sum-num);
	}
}


