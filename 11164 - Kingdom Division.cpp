#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{

    double a,b,c,d1,d2;

    int set=1;

    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {

        if(a<0)
          break;

        d1=(c/b)*a;
        d2=((a+d1)*(c+d1))/(b-d1);

        printf("Set %d:\n%.4lf\n",set++,d1+d2);


    }


    return 0;
}
