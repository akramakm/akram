#include<stdio.h>
int main()
{
    char c;
    printf("veuiller saisir la valeur de c\n");
    scanf("%c",&c);
    if ( c >= 65 && c<=90)
    {
        c += 32;
        printf("%c\n",c);
        return(0);
    }
    c -=  32;
    printf("%c\n",c);
}