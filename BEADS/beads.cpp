#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int cases;
	cin>>cases;
	while(cases--)
	{
		string in , val ;
		cin>>in;
		val = in + in ;
		int size = in.size();
		char min = val[0];
		for ( int i = 0 ; i < in.size() ; i++)
		{
			if( val[i] < min ) 
				min = val[i];
		}
		vector<int> pos ;
		for( int i = 0 ; i< in.size() ; i++ )
		{
			if( in[i] == min )
			{
				pos.push_back(i);
			}
		}
		string min_s( val , pos[0] , size ) ;
		int min_pos = pos[0];
		for ( int i = 1 ;i< pos.size() ; i++ )
		{
			string temp( val , pos[i] , size );
			if ( temp < min_s ) 
			{
				min_s = temp ;
				min_pos = pos[i] ;
			}

		}
		cout<<min_pos+1<<endl;
	}
}
			
			
