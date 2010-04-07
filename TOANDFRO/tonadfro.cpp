#include<iostream>


using namespace std;

int main()
{
	int cols;
	while ( true ) 
	{
		cin>>cols;
		if(cols == 0 ) 
			break;

		string mesg;
		cin>>mesg ; 
		int rows = mesg.size()/cols;
		char grid[rows][cols];
		int front = 1; 
		int count = 0 ;
		for ( int i = 0 ; i<rows; i++ )
		{
			for ( int j = 0 ; j<cols ; j++ )
			{
				if( front == 1 ) 
				{
					grid[i][j] = mesg[count];
				}
				else
				{
					grid[i][cols-j-1] = mesg[count];
				}
				count++;
			}
			front *=-1;

		}
		for ( int i = 0  ; i < cols ; i++ )
		{
			for( int j  = 0 ; j< rows ; j++ )
				cout<<grid[j][i] ;

		}
		
		cout<<endl;

	}
}
