#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main()
{

    int n;

    double total,total1,total2,a[1005];

    while(scanf("%d",&n)&&n)
    {
            total=total1=total2=0;

            for(int i=0;i<n;i++)
            {
                    scanf("%lf",&a[i]);
                    total+=a[i];
            }
            double highx = (int)((total/n+0.0099)*100);
            double lowx = (int)((total/n)*100);
            highx /= 100;
            lowx /= 100;

            for(int i=0;i<n;i++)
            {
                if(a[i]>highx)
                {
                    total1+=a[i]-highx;
                }
                else if(a[i]<lowx)
                    total2+=lowx-a[i];
            }
            if(total1>total2)
            printf("$%.2lf\n",total1);
            else
              printf("$%.2lf\n",total2);

    }


    return 0;
}
