#include<bits/stdc++.h>

using namespace std;


#define pi 2*acos(0.0)

int main()
{
    int t;

    scanf("%ld",&t);

    for(int i=1; i<=t; i++)
    {
        double d,l,a,b;

        scanf("%lf %lf",&d,&l);

        a=l/2;

        b=sqrt(pow((l/2),2) - pow((d/2),2));

        printf("%.3lf\n",pi*a*b);

    }


return 0;
}
