#include<iostream>
#include<vector>

using namespace std;

long long count( int pos , int min  , int k , vector<int> seq );


int main()
{
	int n , k;
	while( true )
	{
		cin>>n>>k;
		if( n == 0  && k == 0  )
			break;

		vector<int> seq ;
		for( int i = 0 ;i< n ;i++)
		{
			int  no;
			cin>>no;
			seq.push_back(no);
		}
		cout<< count ( 0 , seq[0] , k , seq ) <<endl;
	}
}

long long count( int pos , int min  , int k , vector<int> seq ) 
{
	if ( k  == 1 ) 
	{
		long long  c = 0 ;
		for ( int i = pos ; i < seq.size() ;i++)
		{
			if( seq[i] > min )
				c++;
		}
		return c ;
	}

	long long  c  = 0 ;
	for ( int i = pos ; i < seq.size() - k-1 ; i ++ )
	{
		if ( seq[i] < min ) 
			continue ;

		c +=count(i , seq[i] , k-1 , seq );
	}

	return c ;

}	
		
			
