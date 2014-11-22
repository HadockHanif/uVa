#include<bits/stdc++.h>


using namespace std;


bool prime[1000005];

vector<long>v;

void sieve()
{

    prime[1]=1;

    for(long i=4; i<=1000000; i=i+2)
        prime[i]=1;

    for(long i=3; i*i<=1000000; i=i+2)
    {
        if(prime[i]==0)
        {
            for(long j=2*i; j<=1000000; j=i+j)
            {
                prime[j]=1;

            }
        }
    }





}


int main()
{

    sieve();

    int t;

    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        long l,u;

        int ans[201];
        int a[201];

        memset(ans,0,sizeof(ans));
        memset(a,0,sizeof(a));

        scanf("%ld %ld",&l,&u);

        if(l>u)
        {
            long temp=u;
            u=l;
            l=temp;
        }


        v.clear();

        //v.push_back(2);

        for(long j=l;j<=u;j++)
        {
            if(prime[j] == 0)
            v.push_back(j);
        }

        for(long j=1; j<v.size(); j++)
        {
            long diff=v[j]-v[j-1];

            ans[diff]++;
            a[diff]++;
        }
        sort(ans,ans+200);




        if(ans[199]==ans[198]||v.size()<2)
            cout<<"No jumping champion"<<endl;
        else
        {
            int n=ans[199];
            for(int k=1;k<=199;k++)
            {
                if(a[k]==n)
                {
                    n=k;
                    break;
                }
            }

            printf("The jumping champion is %d\n",n);
        }
    }


    return 0;
}
