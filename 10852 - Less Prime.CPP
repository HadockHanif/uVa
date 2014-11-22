#include<bits/stdc++.h>

using namespace std;

bool prime[10005];
vector<long>V;


void seive()
{
    prime[1]=1;

    for(int i=4;i<=10000;i=i+2)prime[i]=1;

    for(int i=3;i*i<=10000;i=i+2)
    {
        if(prime[i]==0)
        {
            for(int j=i*2; j<=10000; j=i+j)
              prime[j]=1;
        }
    }

    for(int i=1;i<=10000;i=i+2)
    {
        if(prime[i]==0)
        V.push_back(i);
    }

}


int main()
{
    seive();

    int m;

    //cout<<prime[59]<<endl;

    cin>>m;

    for(int i=1; i<=m; i++)
    {
        long n,k,l;

        scanf("%ld",&n);

        k=(n/2)+1;

        for(long j=k; j<=10000;j++)
        {
            if(prime[j]==0)
            {
                n=j;
                break;
            }
        }
        cout<<n<<endl;
    }

    return 0;
}
