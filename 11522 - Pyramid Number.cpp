#include<bits/stdc++.h>

using namespace std;

bool ar[1000005];

int main()
{
    ar[2]=1;
    ar[3]=1;
    ar[4]=1;
    ar[5]=1;
    ar[6]=1;
    ar[7]=1;
    ar[8]=1;
    ar[9]=1;
    ar[10]=1;
    ar[33]=1;
    ar[34]=1;
    ar[35]=1;
    ar[36]=1;
    ar[39]=1;
    ar[40]=1;
    ar[41]=1;
    ar[42]=1;
    ar[44]=1;
    ar[46]=1;
    ar[47]=1;
    ar[48]=1;
    ar[49]=1;
    ar[51]=1;
    ar[58]=1;
    ar[56]=1;
    ar[63]=1;
    ar[68]=1;
    ar[70]=1;
    ar[72]=1;
    ar[77]=1;
    for(int i=12;i<=29;i++)ar[i]=1;

    ar[24]=0;
    int t;

    cin>>t;

    for(int i=1;i<=t;i++)
    {


        long a,b,temp;

        cin>>a>>b;

        temp=min(a,b);
        b=max(a,b);
        a=temp;

        int count=0;

        for(int j=a;j<=b;j++)
        {
            if(ar[j]==0)count++;
        }
        printf("%d\n",count);

    }

    return 0;
}
