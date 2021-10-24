#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    printf("m33ach t7rkty\n");
    scanf("%d%d",&a,&b);
    printf("m3ach  wslty \n");
    scanf("%d%d",&c,&d);
    if ( (a > 24  || b > 60) || (c > 24 || d > 60))
    {
        printf("dkhl chi sa3aaa logique a zbii\n");
    }
    else
    {
        if((c == 0 && d == 0) && (a == 0 && b == 0))
        {
            printf("nod t7rk al9lawiii\n");
        }
        else 
        {
            if((d - b) < 0 )
            {
                c = c - 1;
                d = d + 60;
                x = c - a;
                y  = d - b;
                printf("%d:%d\n",x,y);
            }
            else if(c == 0)
            {
                if ((d - b) < 0 )
                {
                    c = c - 1;
                    d = d + 60;
                    x = c - a;
                    y  = d - b;
                    printf("%d:%d\n",x,y);
                }
                else
                {
                    c = 24;
                    x = c - a;
                    y = d - b;
                    printf("%d:%d\n",x,y);
                }
            }
            else
            {
                x = c - a;
                y = d - b;
                printf("%d:%d\n",x,y);
            }
        }
    }
}