#include<bits/stdc++.h>

using namespace std;

double count(long long a,long long r)
{
        long long i;
        double sum;
        double sum1;
        long long maxi=max(a,a-r);
        if(a==r)return 1;

        else if(maxi==a-r)
        {
            sum=sum1=0;
            for(i=a;i>=(a-r+1);i--)
            sum=sum+log10(i);
            for(i=1;i<=r;i++)sum1=sum1+log10(i);
        }

        else
        {
            sum=sum1=0;
            for(i=a;i>r;i--)
            sum=sum+(log10(i));

            for(i=1;i<=r;i++)
           {
                sum1=sum1+log10(i);

           }



        }
 return floor(sum-sum1+1);
}



int main()
{

        long long n,r;
        double sum;

        while(scanf("%lld %lld",&n,&r)==2)
        {
            sum=count(n,r);

            printf("%.0lf\n",sum);
        }

}
