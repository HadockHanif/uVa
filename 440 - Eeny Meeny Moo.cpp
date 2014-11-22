#include<bits/stdc++.h>

using namespace std;

long ar[200];

long ans[200];
long b,d;

void joseph(long n,long a)
{
    memset(ar,0,sizeof(ar));

    for(long j=1; j<=n; j++)ar[j]=j;

    long c=1,idx=1,cross=1;
    long j;
    ar[1]=0;

    bool apro=1;
    long temp;

    while(c<n-1)
    {
        d=0;
        for(j=idx; ; j++)
        {

            //cout<<"bug"<<endl;

            if(d==a)
            {
                idx=temp;
                break;
            }
            if(j>n)
                j=j%n;

            else if(ar[j]!=0)
            {
                d++;
                temp=j;
            }
        }



        ar[idx]=0;
        c++;



    }

    if(ar[2]!=0)
    {
        ans[n]=a;
    }
    else
        joseph(n,a+1);
}


int main()
{
    long a=2;

    for(long i=3; i<=150; i++)
    {
        joseph(i,a);
        a=2;
    }

//    cout<<ans[3]<<" "<<ans[4]<<endl;

    long n;

    while(scanf("%ld",&n)  &&  n != 0)
    {

cout<<ans[n]<<endl;


    }


    return 0;
}
