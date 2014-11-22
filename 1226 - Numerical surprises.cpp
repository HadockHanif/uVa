#include<stdio.h>
int main()
{
    int t;
    long long N,P,R;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        N=P=0;
        scanf("%lld %lld",&N,&P);
        printf("%lld\n",P%N);
    }
return 0;
}
