#include<stdio.h>
int main()
{
	unsigned int a,b,c;
	printf("-----chhal f sa3a a bb-----\n");
	scanf("%d%d%d",&a,&b,&c);
	if( a>24 || b > 60 || c > 60)
	{
		printf("ya w9 bna lik hna f aliens\n");

	}
	else
	{
		if(a== 23 && b== 59 && c == 59)
	{
		printf(" 00 : 00 :00\n");
	}
	else if(b == 59 && c == 59)
	{
		a = a + 1;
		printf("%d : 00 : 00\n",a);

	}
	else if(c == 59 )
	{
		b = b + 1;
		printf("%d : %d : 00",a,b);
	}
	else
	{
		c = c +1;
		printf("%d : %d : %d ",a,b,c);
	}
	}
	
}