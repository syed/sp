#include<iostream>

using namespace std;

int main()
{
	long long  cases;
	cin>>cases;
	for ( long long  i = 0; i< cases ; i++ )
	{
		long long num ;
		cin>>num;
		long long zeros ;
		zeros = 0 ;
		for ( long long  j = 5 ; j<= num ; j*=5 ) 
			zeros+= num/j;
	        cout<<zeros<<endl;

	}

}	
