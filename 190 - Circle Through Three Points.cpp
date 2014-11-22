#include<bits/stdc++.h>
#define PI 3.141592653589793

using namespace std;

int main()
{

    double x1,x2,x3,y1,y2,y3,Sa,Sb,Sc,circleR,h,k,a,b;


    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        Sa=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        Sb=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
        Sc=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));

        circleR=(Sa*Sb*Sc)/sqrt((Sa+Sb+Sc)*((-1.0*Sa)+Sb+Sc)*(Sa+(-1.0*Sb)+Sc)*(Sa+Sb+(-1.0*Sc)));

        a=(x1+x2)/2;
        b=(y1+y2)/2;



    }


    return 0;
}
