#include<stdio.h>
int main()
{
	int i , s;
	s = 0;
	for (i = 0; i <= 100 ; i++)
	{
		if( i % 2 == 0)
		{
			s =s + i;
		}
	}
	printf("%d\n",s);
}