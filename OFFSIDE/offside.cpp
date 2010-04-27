#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	while ( true )
	{
		int A,D;
		cin>>A>>D;
		vector<int> a_pos,d_pos ;
		if ( A == 0 && D == 0 )
			break;

		for(int i = 0 ; i<A ; i++)
		{
			int num ;
			cin>>num ;
			a_pos.push_back(num);
		}
		for(int i = 0 ; i<D ; i++)
		{
			int num ;
			cin>>num ;
			d_pos.push_back(num);

		}
		sort(a_pos.begin() , a_pos.end());
		sort(d_pos.begin() , d_pos.end());
		if ( a_pos[0] < d_pos[1] )
		{
			cout<<"Y"<<endl;
		}
		else 
			cout<<"N"<<endl;


		a_pos.clear();
		d_pos.clear();

	}
}
