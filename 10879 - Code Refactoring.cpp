#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin>>t;

    char c='#';

    for(int i=1; i<=t; i++)
    {
        long n,a,b,c,d;

        scanf("%ld",&n);

        //cout<<"Case %d"<<i<<": ";

        for(long k=2; k<=n; k++)
        {
            if(n%k==0)
            {
                a=k;
                b=n/k;
                break;
            }
        }
        for(long k=2; k<=n; k++)
        {
            if(n%k==0)
            {
                if(k!=a&&k!=b)
                {

                    c=k;
                    d=n/k;
                    break;
                }
            }
        }

        printf("Case #%d: %ld = %ld * %ld = %ld * %ld\n",i,n,a,b,c,d);

    }

    return 0;
}
