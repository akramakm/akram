#include<stdio.h>
int main()
{
    int a,b,c;
    printf("--wach bhal bhal ola la--\n");
    printf("ktb a\n");
    scanf("%d",&a);
    printf("ktb b\n");
    scanf("%d",&b);
    c = a*b;
    if (c==0)
    printf("chi wa7d fehum nul");
    else if(c>0)
    printf("%d et %d sont de meme signe\n",a,b);
    else
    printf("rahom de signe differents\n");
    return(0);

}