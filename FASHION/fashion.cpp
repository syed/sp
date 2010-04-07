#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int cases ;
	cin>>cases;
	for ( int i =0 ; i< cases ; i++)
	{
		int num ;
		cin>>num ;
		vector<int> men , women ;
		for ( int j = 0 ; j< num ; j++ )
		{
			int val ;
			cin>>val;
			men.push_back(val);
		}
		for ( int j = 0 ; j< num ; j++ )
		{
			int val;
			cin>>val;
			women.push_back(val);

		}
		long long mul;
		mul = 0 ;
		sort(men.begin() , men.end()) ;
		sort(women.begin() , women.end()) ;
		for ( int j  = 0 ; j< men.size() ; j++ )
		{
			mul+=men[j]*women[j];
		}
		cout<<mul<<endl ; 
		men.clear();
		women.clear();
	}
}

