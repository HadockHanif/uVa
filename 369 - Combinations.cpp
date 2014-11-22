#include<bits/stdc++.h>

using namespace std;
#define i64 unsigned long long

i64 dp[1000][1000];

i64 nCr(int n,int r)
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
    int a,b;


    while(scanf("%d %d",&a,&b))
    {
        if(a==0&&b==0)break;

        printf("%d things taken %d at a time is %lld exactly.\n",a,b,nCr(a,b));
    }

    return 0;
}
