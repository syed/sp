#include<iostream>
#include<string>
#include<vector>


using namespace std;


int main()
{
	int packs;
	vector<int> vals;
	while ( true )
	{
		cin>>packs;
		if ( packs ==  -1 ) 
		{
			break;
		}
		long long sum = 0;
		for ( int i =0 ; i < packs ; i++  )
		{
			int val;
			cin>>val;
			vals.push_back(val);
			sum+=val;
		}
		if ( sum % packs != 0 ) 
		{
			cout<<"-1"<<endl;
			vals.clear();
		}
		else
		{

			long long eq = sum/packs;
			long long moves = 0 ;
			for ( int i = 0 ; i< vals.size() ; i++ ) 
			{
				if ( vals[i] < eq )
					moves+=(eq-vals[i]);
			}
			cout<<moves<<endl ;
			vals.clear();
		}
	}
}
