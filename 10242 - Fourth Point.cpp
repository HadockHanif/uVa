#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main()
{


    double m,n,x1,x2,x3,y1,y2,y3,x,y,x4,y4,a[10];

     while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7])==8)
     {

             for(int i=0;i<8;i+=2)
             {
                 for(int j=i+2;j<8;j++)
                 if(a[i]==a[j])
                 {
                     if(a[i+1]==a[j+1])
                     {
                            m=a[i];
                            n=a[i+1];
                            a[i]=a[i+1]=a[j]=a[j+1]=20000;
                            break;
                     }

                 }


             }
             x=y=0;
             for(int i=0;i<8;i+=2)
             {

                 if((a[i]!=20000))
                 {
                     x=x+a[i];
                 }


             }
             for(int i=1;i<8;i+=2)
             {
                 if(a[i]!=20000)
                 {
                     y=y+a[i];
                 }
             }

             m=x-m;
             n=y-n;


             printf("%.3lf %.3lf\n",m,n);

     }

return 0;
}
