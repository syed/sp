#include<iostream>
using namespace std;
int main()
{
	int cases;
	cin>>cases;
	while(cases--)
	{
		int n ;
		cin>>n ;
		cout<<(n*(n+2)*(2*n+1))/8<<endl;
	}
}
