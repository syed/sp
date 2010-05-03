#include<iostream>
#include<vector>
#include<string>
#include<set>

using namespace std;

main()
{
	set<char> s1,s2,s3;
	for ( int i = 'a' ; i <= 'i' ; i++)
	{
		s1.insert(i);
	}
	for ( int i = 'j' ; i <= 'r' ; i++)
	{
		s2.insert(i);
	}
	for ( int i = 's' ; i <= 'z' ; i++)
	{
		s3.insert(i);
	}
	s3.insert('_');
	while ( true ) 
	{

		int k1,k2,k3;
		string enc;
		cin>>k1>>k2>>k3;
		if ( k1 == 0 && k2 == 0 &&  k3 == 0 )
			break;

		cin>>enc;
		vector<int> p1,p2,p3;
		for ( int i = 0 ;i<enc.size();i++)
		{
			if( s1.count(enc[i]) )
			{
				p1.push_back(i);
			}
			if( s2.count(enc[i]) )
			{
				p2.push_back(i);
			}
			if( s3.count(enc[i]) )
			{
				p3.push_back(i);
			}
		}
		string dec ( enc.size() , '*' );
		for(int i = 0 ;i< p1.size(); i++)
		{
			int new_pos;
			new_pos = p1[(i+k1)%(p1.size())];
			dec[new_pos] = enc[p1[i]];
		}
		for(int i = 0 ;i< p2.size(); i++)
		{
			int new_pos;
			new_pos = p2[(i+k2)%(p2.size())];
			dec[new_pos] = enc[p2[i]];
		}
		for(int i = 0 ;i< p3.size(); i++)
		{
			int new_pos;
			new_pos = p3[(i+k3)%(p3.size())];
			dec[new_pos] = enc[p3[i]];
		}
		cout<<dec<<endl;
	}
}

