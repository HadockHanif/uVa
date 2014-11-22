#include<bits/stdc++.h>

using namespace std;

bool prime[1000005];

long dprime[1000005];


void seive()
{

    prime[1]=1;
    for(long i=4; i<=1000000; i=i+2)
        prime[i]=1;

    for(long i=3; i<=sqrt(1000000); i=i+2)
    {
        if(prime[i]==0)
        {
            for(long j=2*i; j<=1000000; j=i+j)
                prime[j]=1;
        }
    }


}

void digitP()
{
    long nodprime=0;

    for(long i=2; i<=1000000; i++)
    {


        if(prime[i]==0)
        {
            long n=i;
            long sum=0;
            while(n>9)
            {
                sum=sum+(n%10);
                n=n/10;
            }
            sum=sum+n;
            if(prime[sum]==0)
            {
                nodprime++;
            }

        }
        dprime[i]=nodprime;

    }
}


int main()
{
    seive();
    digitP();


    long t,t1,t2;




    cin>>t;

    for(long i=1; i<=t; i++)
    {

        scanf("%ld %ld",&t1,&t2);
        printf("%ld\n",dprime[t2]-dprime[t1-1]);
    }

    return 0;
}
