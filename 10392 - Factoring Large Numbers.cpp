#include<bits/stdc++.h>

using namespace std;

bool prime[10000005];

vector< long >V;

void sieve()
{
    for(long i=4; i<=10000000; i=i+2)
        prime[i]=1;

    for(long i=3; i*i<=10000000; i=i+2)
    {
        if(prime[i]==0)
        {
            for(long j=i*2; j<=10000000; j=i+j)
                prime[j]=1;
        }
    }
    V.clear();

    V.push_back(2);

    for(long i=3; i<=10000000; i=i+2)
    {
        if(prime[i]==0)
            V.push_back(i);
    }
}


int main()
{
    sieve();

    string s;

    long long n,m,x;

    while(scanf("%lli",&m) && m>0)
    {
        n=m;
        cin>>s;

        if(m<0)
            n=-n;

        vector< long long>factor;

        for(int i=0; i<78493&&V[i]*V[i]<=n; i++)
        {
            if(n%V[i]==0)
            {
                while(n%V[i]==0)
                {
                    factor.push_back(V[i]);
                    n=n/V[i];
                }
            }
        }
        bool b=0;
        if(n>1)
        {
            b=1;
            x=n;
        }

        for(int i=0; i<factor.size(); i++)
            printf("    %lld\n",factor[i]);

        if(b==1)
        printf("    %lli\n",x);

        printf("\n");
    }

    return 0;
}
