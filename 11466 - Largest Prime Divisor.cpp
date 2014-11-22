#include<bits/stdc++.h>

using namespace std;

bool prime[10000005];

vector< long long >V;

void sieve()
{

    for(long long i=4;i<=10000000;i+=2)
    prime[i]=1;

    for(long long i=3; i*i<=10000000;i=i+2)
    {
        if(prime[i]==0)
        {
            for(long long j=2*i;j<=10000000;j=j+i)
            prime[j]=1;
        }
    }

    V.clear();
    V.push_back(2);
    for(long long i=3; i<=10000000; i=i+2)
    {
        if(prime[i]==0)
        V.push_back(i);
    }
}


int main()
{

    sieve();

    long long lu;

    while(scanf("%lld",&lu)&&lu!=0)
    {
        vector<long long>factor;
        long long a;

        set<long long>st;

        if(lu<0)
          lu=-lu;

        if(lu==1)
        {
            cout<<"-1"<<endl;
            continue;
        }

        int c=0;

        for(long long i=0;V[i]*V[i]<=lu;i++)
        {
            if(lu%V[i]==0)
            {
                while(lu%V[i]==0)
                {
                    lu=lu/V[i];
                    a=V[i];

                }
                c++;
            }
        }
        if(lu>1)
        {
            a=lu;
            c++;
        }
        if(c==1)
        cout<<"-1"<<endl;
        else
        {
            printf("%lld\n",a);
        }

    }
    return 0;
}
