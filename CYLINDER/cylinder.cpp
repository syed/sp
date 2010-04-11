#include<iostream>

using namespace std;

int main()
{
	int w,h;
	while ( true ) 
	{
		cin>>h>>w;
		if ( w == 0 && h == 0 ) 
		{
			break;
		}
		float x ;
		x =  float(w) / (22/7 +1 );
		cout<<"X "<<x<<endl;
		if ( x > h ) 
		{
			x = h ;
		}
		float vol ;
		vol = (22.0/28.0)*x*x*(w-x);
		cout<<vol<<endl;
	}
}



