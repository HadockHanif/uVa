#include<bits/stdc++.h>

using namespace std;

bool prime[1000005];

vector<long>V;

void seive()
{
    for(int i=4; i<=1000000; i=i+2)
        prime[i]=1;

    for(int i=3; i*i<=1000000; i=i+2)
    {
        if(prime[i]==0)
        {
            for(int j=i*2; j<=1000000; j=i+j)
            prime[j] = 1;
        }
    }

    V.clear();
    V.push_back(2);

    for(long i=3; i<=1000000; i=i+2)
    {
        if(prime[i]==0)
        V.push_back(i);
    }

}


int main()
{
    seive();

    long n;



    while(scanf("%ld",&n)&&n!=0)
    {
        long sum=-1,a,b,c,d;
        a=b=c=d=0;

        for(long i=0; V[i]<(n/2)+2; i++)
        {
                if(prime[n-V[i]]==0)
                {
                    c=V[i];
                    d=n-V[i];


                    if((d-c)>sum)
                    {
                        sum=d-c;
                        a=c;
                        b=d;
                    }
                }

        }
        printf("%ld:\n",n);

        if(a==0&&b==0)
        printf("NO WAY!\n");
        else
        printf("%ld+%ld\n",a,b);
    }

    return 0;
}
