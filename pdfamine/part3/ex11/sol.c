#include<stdio.h>
int main()
{
    //programme dial la valeur absolue hada a jmi
    int a;
    printf("stp dkh had le nombre : ");
    scanf("%d",&a);
    if( a >= 0)
    {
        printf("|%d|  = %d\n" ,a,a);
    }
    else 
    {
         printf("|%d|  = %d\n" ,a,-a);
    }
}