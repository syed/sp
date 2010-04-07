#include<iostream>
#include<string>
#include<vector>


using namespace std;


int main()
{
	long long  cases;
	cin>>cases;
	for(long long  i = 0 ;i<cases; i++ )	
	{	
		long long  boys;
		cin>>boys;
		long long sum = 0 ;
		for ( long long  j =0 ; j < boys ; j++  )
		{
			long long  candy ; 
			cin>>candy ;
			sum += candy %boys ;

		}
		sum= sum%boys;
		if ( sum != 0 ) 
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}
