#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("--mhm salam 7na wa7d centre d zbi--\n");
    printf("-10 dial les copies  b \"0,30 dhs/feuile \" \n");
    printf("--20 dial les copies  b \"0,25 dhs/feuile \" \n");
    printf("fo9 20 dial les copies  b \"0,20 dhs/feuile \" \n");
    printf("mhm db golia a bb chhhal khassk\n");
    scanf("%d",&a);
    if (a<=10)
    {
        b = a * 0.30;
        printf("ser 3ti l samir %.2f dhs \n",b);
    }
    else if(a>10 && a<= 20)
    {
        b = a * 0.25;
        printf("ser 3ti l samir %.2f dhs \n",b);

    }
    else
    {
        b = a * 0.20;
        printf("ser 3ti l samir %.2f dhs \n",b);

    }
    
}