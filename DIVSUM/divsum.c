#include<stdio.h>

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
		for ( i = 1 ;  i<=(num/2) - ((num/2)%i) ; i++ )
		{
			if( num %i == 0 )
			{
				sum+=i;
			}
		}
		printf("%llu\n",sum);
	}
}


