#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long T;
    double d,v,u,x,y;

    scanf("%ld",&T);

    for(long i=1;i<=T;i++)
    {

        scanf("%lf %lf %lf",&d,&v,&u);

        if(u==0||v>=u||v==0)
        {
            printf("Case %ld: can't determine\n",i);
            continue;
        }
        x=d/u;
        y=d/(sqrt((u*u)-(v*v)));
        x=fabs(x-y);
        printf("Case %ld: %.3lf\n",i,x);

    }

    return 0;
}
