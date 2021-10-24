#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && a==c)
    {
        printf("motasawi l adla3\n");
    }
    else if(a==b || a==c)
    {
        printf("motasawi sa0ayn\n");
    }
    else if(a^2 + b^2 == c^2)
    {
        printf("rectangle\n");
    }
    else
    {
        printf("hada triangle o sf\n");
    }
}