#include<bits/stdc++.h>

using namespace std;



long c;
long ar[10000005];

long ack_func(long pr)
{

        long idx=pr;
        if(ar[pr]!=-1)
        return ar[pr];
        long cnt=0;

        while(pr!=1)
        {
            if(pr%2==0)
            {
                pr=pr/2;
                cnt++;
            }
            else
            {
                pr=(3*pr)+1;
                cnt++;
            }
        }
        ar[idx]=cnt;

        return cnt;

}

int main()
{

    memset(ar,-1,sizeof(ar));

    ar[1]=3;

    long n,m;

    while(scanf("%ld %ld",&n,&m))
    {
        c=0;
        if(n==0 && m==0 )break;
        long add=0;

        long max=-1;

        if(n>m)
        swap(n,m);

        for(long i=n; i<=m; i++)
        {
            c=ack_func(i);

            if(c>max)
            {
                max=c;
                add=i;
            }
        }
        printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",n,m,add,max);
    }
    return 0;
}
