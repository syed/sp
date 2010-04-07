#include<iostream>
#include<sstream>
#include<cstdio>
#include<string>
using namespace std;
int reverse_num( int num ) ;

int main()
{
	int cases ; 
	cin>>cases;
	for ( int i =0  ; i < cases ; i++ )
	{
		int a , b ;
		cin>>a>>b;
		int rev_a , rev_b;
		rev_a = reverse_num ( a ) ;
		rev_b = reverse_num ( b ) ;
		int sum_r = reverse_num( rev_a + rev_b ) ;
		cout<<sum_r<<endl;
	}
}

int reverse_num(int num )
{
	ostringstream ostr;
	ostr<<num;
	string num_str = ostr.str();
	string rev_str ;
	for (string::reverse_iterator ii  = num_str.rbegin () ; ii !=  num_str.rend() ; ii++) 
	{
		rev_str.push_back(*ii);
	}
	istringstream istr(rev_str);
	int rev_num ;
	istr>>rev_num;
	return rev_num;
}


	
