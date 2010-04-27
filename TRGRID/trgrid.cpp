#include<iostream>
using namespace std;


int main()
{
	int cases;
	cin>>cases;
	while ( cases-- ) 
	{
		long long rows , cols ;
		cin>>rows>>cols;
		int r , c;
		char val;
		r=rows%2 , c = cols%2 ;

		if ( r == 0 && c == 0 && cols>=rows )
		{
			val='L';
		}
		else if ( r == 0 && c == 0 && cols<rows )
		{
			val='U';
		}
		else if ( r == 1 && c == 1 && cols>=rows )
		{
			val='R';
		}
		else if ( r == 1 && c == 1 && cols<rows )
		{
			val='D';
		}
		else if ( r == 1 && c == 0  && cols>rows )
		{
			val='R';
		}
		else if ( r == 1 && c == 0  && cols<rows )
		{
			val='U';
		}
		else if ( r == 0 && c == 1  && cols>rows )
		{
			val='L';
		}
		else if ( r == 0 && c == 1  && cols<rows )
		{
			val='D';
		}
		cout<<val<<endl;
	}
}


