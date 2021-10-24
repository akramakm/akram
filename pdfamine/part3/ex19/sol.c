#include <stdio.h>
int main()
{
	//moin d une minute
	int a , b;
	printf("---chhal f sa3a a bb---\n");

	scanf("%d%d",&a,&b);

	if(a >=24 || b >= 60)
	{
		printf("aww ta malna a w9 3aychin f moritaniaaa\n");
	}
	else
	{
		if( a== 00 && b == 00)
		{
			printf(" 23 : 59\n");
		}
		else if(b == 0)
		{
			a = a - 1;
			printf("%d : 59",a);
		}
		else
		{
			b = b - 1;
			printf("%d : %d\n",a,b);
		}
	}
}