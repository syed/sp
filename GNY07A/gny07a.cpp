#include<iostream>
#include<string>
using namespace std;

int main()
{
	int cases ,count=1;
	cin>>cases;
	while(cases--)
	{
		int pos ;
		string val;
		cin>>pos>>val;
		val.erase(pos-1,1);
		cout<< count++ << " "<<val<<endl;
	}
}

