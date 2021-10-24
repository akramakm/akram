#include<stdio.h>
int main()
{
    int a , b ,c , d;
    printf("dkhl la valeur de a\n");
    scanf("%d",&a);
    printf("dkhl la valeur de b\n");
    scanf("%d",&b);
    c = a * b;
    d = a;
    if (c > 0)
    {
        a = a+b;
        b = a - b;
        a = a - b;
        printf("les nouvelles valeur de a est %d\n",a);
        printf("les nouvelles valeur de b est %d\n",b);
    }
    else
    {
        a = d + b;
        b = d * b;
        printf("les nouvelles valeur de a est %d\n",a);
        printf("les nouvelles valeur de b est %d\n",b);
    }
}