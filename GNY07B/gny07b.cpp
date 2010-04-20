#include<iostream>
#include<string>
using namespace std;

int main()
{
	int cases ;
	double kg_to_p = 2.2046;
	double p_to_kg = 0.4536;
	double ltr_to_g = 0.2642;
	double g_to_ltr = 3.7854;

	cin>>cases;
	for(int i=1 ; i <=cases; i++)
	{
		double val ;
		string unit ;
		cin>>val>>unit;
		if(unit == "kg" )
		{
			printf("%d %.4f lb\n",i,val*kg_to_p);
		}
		else if(unit == "lb" )
		{
			printf("%d %.4f kg\n",i,val*p_to_kg);
		}
		else if(unit == "l" )
		{
			printf("%d %.4f g\n",i,val*ltr_to_g);
		}
		else if(unit == "g" )
		{
			printf("%d %.4f l\n",i,val*g_to_ltr);
		}
	}
}
