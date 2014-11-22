#include<bits/stdc++.h>

using namespace std;

#define  pi 2*acos(0.0)

int main()
{

    double area;
    double r,n;

    while(scanf("%lf %lf",&r,&n)==2)
    {
        area=((n*r*r*sin((2*pi)/n))/2);

        printf("%.3lf\n",area);
    }

    return 0;
}
