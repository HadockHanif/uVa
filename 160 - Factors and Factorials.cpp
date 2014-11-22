#include<bits/stdc++.h>

using namespace std;

bool prime[110];

vector< int >V;


void sieve()
{


        for(int i=4; i<=105; i=i+2)
        prime[i]=1;



        for(int i=3; i*i<=105; i=i+2)
        {
            if(prime[i]==0)
            {
                for(int j=i*2; j<=105; j=i+j)
                prime[j]=1;
            }
        }
        V.clear();
        V.push_back(2);

        for(int i=3; i<=105; i=i+2)
        {
            if(prime[i]==0)
            V.push_back(i);
        }
}

int main()
{
    sieve();

    int n;

    while(scanf("%d",&n) && n!=0)
    {
        int cnt[105];
        memset(cnt,0,sizeof(cnt));

        for(int i=2; i<=n; i++)
        {
            int k=i;
                for(int j=0; V[j]*V[j]<=k; j++)
                {
                    if(k%V[j]==0)
                    {
                        while(k%V[j]==0)
                        {
                            cnt[V[j]]++;
                            k=k/V[j];
                        }
                    }
                }
                if(k>1)
                {
                    cnt[k]++;
                }

        }

    printf("%3d! =",n);

    int c=0;

    for(int i=2;i<=n;i++)
    {

        if(cnt[i] != 0)
        {
            if(c==15)
        {
            printf("\n      ");

        }

            printf("%3d",cnt[i]);
            c++;
        }


    }
    printf("\n");

    }


    return 0;
}
