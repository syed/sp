#include<iostream>
#include<stack>
using namespace std;

//push operators on stack until we encounter a matching parantheses and pop out 
//print out the values a , b directly noo need for them to push 

string parse ( string in  ) ;

int main()
{
	int cases ;
	cin>>cases;
	for ( int i = 0 ; i < cases ; i++ )
	{
		string in ; 
		cin>>in;
		string out = parse( in ) ;
		cout<<out<<endl;
	}
}

string parse(string in )
{
	stack<char>  st ; 
	string out ; 
	for ( int i =0 ; i < in.size() ; i++ )
	{
		if ( in[i] != '+' && in[i] != '-'  && in[i] != '*' && in[i] !='/' && in[i] != '^'  && in[i] != '(' && in[i] != ')' ) 
		{
			out.push_back(in[i]);
		}
		else if( in[i] == ')' )
		{
			char pop;
			while ( (  pop = st.top() ) != '(' )
			{
				out.push_back(pop);
				st.pop();
			}
			pop = 'z';
			st.pop();
		}
		else
		{
			st.push(in[i]);
		}
	}
	return out ;
}

