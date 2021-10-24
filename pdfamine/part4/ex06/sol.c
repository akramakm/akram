#include<stdio.h>
#include<math.h>
int main()
{
	int i , s , x;
	s = 0;
	for ( i = 0 ;i<= 100 ; i++)
	{
		x = pow(i,2);
		s = s + x;

	} 
	printf("%d\n",s);
}