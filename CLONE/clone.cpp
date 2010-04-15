#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main()
{
	while ( true ) 
	{
		int num , len ;
		cin>>num>>len;
		if( num == 0 && len == 0 )
			break;
		map<string , int > tot;
		int num2 ;
		num2 = num ;

		while( num -- ) 
		{
			string dna ;
			cin>>dna;
			tot[dna]++;
		}
		vector<int> res(num2 , 0 )  ;
		for( map<string , int >::iterator ii = tot.begin() ; ii != tot.end() ; ii++ )
		{
			int clones = (*ii).second;	
			res[clones-1]++;
			
		}
		
			
		for ( int i = 0 ; i < num2 ; i++ )
		{
			cout<<res[i]<<endl;
		}

			

	}
}
