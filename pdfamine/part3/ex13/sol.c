//mention d zb
#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("a  = ");
    scanf("%f",&a);
    printf("b  = ");
    scanf("%f",&b);
    printf("c  = ");
    scanf("%f",&c);
    printf("d  = ");
    scanf("%f",&d);
    printf("e =  ");
    scanf("%f",&e);
    float m;
    m = (a+b+c+d+e)/5;
    printf("m = %.2f\n",m);
    if( m < 10)
    {
        printf("echec\n");
    }
    else if(m<12 && m >= 10)
    {
        printf("passbele\n");
    }
    else if (m>=12 && m <14)
    {
        printf("assez bien\n");
    }
    else if(m>= 14 && m <16)
    {
        printf("bien");
    }
    else if(m>= 16 && m<18)
    {
        printf("tres bien");
    }
    else{
        printf("w9 exelent");
    }
}
