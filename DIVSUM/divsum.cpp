#include<iostream>
#include<cmath>
#include<vector>
#include<map>
using namespace std;

bool vals[500001];
int pow( int base , int power )
{
	int ret = 1 ;
	while ( power -- ) 
		ret*=base;

	return ret;
}

bool is_prime( int num )
{
	if( !vals[num] )
		return 1;
	else
		return 0 ;
}

long long calculate_sum( map<int , int > facts )
{
	long long sum = 1 ;
	for ( map<int , int >::iterator ii = facts.begin() ; ii != facts.end() ; ii++)
	{
		//cout<<"Prime: " << (*ii).first <<"Value: "<<(*ii).second<<endl;
		int prime , power ;
		prime = (*ii).first;
		power = (*ii).second;
		sum*=( ( pow(prime , power+1 ) - 1 ) / ( prime - 1 ) );

	}
	//cout<<"Sum " <<sum<<endl;
	return sum ;
}

int main()
{
	vector<int> primes;
	vals[0] = vals[1] = vals[2] = vals[3] = 0  ;
	for ( int i=2 ; i<=sqrt(500000) ; i++ )
	{
		for( int j = i*i  ; j <= 500000 ; j+=i )
			vals[j] = 1;	
	}
	for( int i = 2; i<500000 ; i++ )
	{
		if( is_prime(i) )
		{
			primes.push_back(i);
		}
	}	
	map <int , int > factors;

	long long cases ;
	cin>>cases;
	while(cases--)
	{
		long long num ;
		cin>>num;
		int num2 = num;
		for( int i = 0 ; i< primes.size() ; i++ )
		{
			int pnum = primes[i];
			int flag = 0 ;

			while ( ! (num % pnum) )
			{
				factors[pnum]++;
				//cout<<"factor "<<pnum<<endl;
				num = num/pnum;
				if( num == 1 ) 
				{
					flag = 1 ; 
					break;
				}
			}
			if( flag == 1 )
			{
				cout<<calculate_sum(factors)-num2<<endl;
				factors.clear();
				flag=0;
			}
		}
	}

}
