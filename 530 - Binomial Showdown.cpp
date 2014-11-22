#include<bits/stdc++.h>

using namespace std;
#define i64 unsigned long long

i64 dp[10000][10000];

i64 nCr(long n,long r)
{

        if(n==r)return 1;
        if(r==1)return n;
        if(dp[n][r]!=-1)return dp[n][r];
        else
        {
            dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
            return dp[n][r];
        }
}





int main()
{
    memset(dp,-1,sizeof(dp));
    long a,b;


    while(scanf("%ld %ld",&a,&b))
    {
        if(a==0&&b==0)break;

        if(b==0)
        {
            cout<<"1"<<endl;
            continue;
        }

        cout<<nCr(a,b)<<endl;
    }

    return 0;
}

