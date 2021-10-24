//signe d’un produit de deux nombres
/*mhm hantaa r kinin deux methode dial dir lwl f tani o tchouf ola t9arnhum khdm
 b tania bach twlf les operateurs*/
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("veuiller saisir a\n");
    printf(" a = ");
    scanf("%d",&a);
    printf("veuiller saisir b\n");
    printf(" b= ");
    scanf("%d",&b);
    if (a == 0 || b == 0)
    {
        printf("le produit est null\n");
    }
    else  if( (a>0 && b>0) || (a<0 && b<0) )
    {
        printf("produit est surement positive\n");
    }
    else
    {
        printf("produit negatife a bb\n");
    }

}   