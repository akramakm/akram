#include<stdio.h>
int main()
{
    int a,b,c;
    // hada ki 3tek lmin dial 3 nombre chouf lblan r sahl kat9arn wa7d m3ahum kmlin b l operateur "et" safi
    printf("dkhl dok les nombres a khay dialo\n");
    printf("a  = ");
    scanf("%d",&a);
    printf("b  = ");
    scanf("%d",&b);
    printf("c  = ");
    scanf("%d",&c);
    if (a <= b && a <= c)
    {
        printf(" %d est le minimum",a);
    }
else if (b <= a && b <= c)
    {
        printf(" %d est le minimum",b);
    }
     else if (c <= b && c <= a)
    {
        printf(" %d est le minimum",c);
    }
    

}