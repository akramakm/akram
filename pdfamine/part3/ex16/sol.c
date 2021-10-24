#include <stdio.h>
int main()
//plus une munite
{
	unsigned int  a , b;
	printf("veuiller sasir l heure\n");
	scanf("%d",&a);
	printf("veuiller saisir les munutes\n");
	scanf("%d",&b);
	if (a >= 24 || b >= 60 )
	{
		printf("w9 ta malna 3aychin f zo7al\n");
	}
	else 
	{
		if( a == 23 && b == 59)
		{
			printf("00 : 00\n");
		}
		else if(b == 59)
		{
			a = a + 1;
			printf("%d : 00\n",a );
		}
		else
		{
			b = b + 1;
			printf("%d : %d\n",a,b);		}
	}
}