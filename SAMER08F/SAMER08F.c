#include<stdio.h>
int main()
{
    int length;
    while(1)
    {
        int tot,i;
        scanf("%d",&length);
        if ( length == 0 )
            break;

        tot = 0 ;
        for (i=0;i<length;i++)
            tot+= ( length - i ) * ( length - i );

        printf( "%d\n",tot);
    }
}
