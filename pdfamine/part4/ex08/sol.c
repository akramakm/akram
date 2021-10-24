#include<stdio.h>
int main()
{
	float   j ;
	float x , s;
	int  i;
	s = 0;
	for  ( i = 1 ; i<=99 ; i++)
	{
		if ( i % 2 == 0)
		{
			i = i * -1;
			for ( j = 2 ; j <= 100; j++)
			{	
				if ( j == i + 1 )
				{		
						i = i * -1;
						s = s + i / j;
					
				}
			}
		}
		for ( j = 2 ; j <= 100; j++)
			{	
				if ( j == i + 1 )
				{		
						s = s + i / j;
					
				}
			}
	}
	printf("%f",s);
}