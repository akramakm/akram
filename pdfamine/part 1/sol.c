#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("\tswap*2\n");
    printf("veuillez sasir la valeur de s trois variables\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
    d = a;
    a = c;
    c = d;
    d = b;
    b = c;
    c = d;
    //on a fait le swap 2 fois
    printf("donc le resultat est\n %d\t%d\t%d",a,b,c);
    return(0);


}