#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin>>t;

    for(int i=1; i<=t; i++)
    {
        long long n,res=0,tm;

        scanf("%lld",&n);

        long long d=1,m=0;


        if(n<1)
        {
            cout<<"0"<<endl;
            continue;
        }
        for(long k=1;k<sqrt(n);k++)
        {
            tm=((n/k)-(n/(k+1)));
            m=m+tm;
            res=res+(k*tm);
        }
        for(long l=1; l<=(n-m); l++)
        res=res+(n/l);

        printf("%lld\n",res);
    }


    return 0;
}
