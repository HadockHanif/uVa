#include<bits/stdc++.h>

using namespace std;

int main()
{

    long n;
    int a[2000];

    while(scanf("%ld",&n)&&n!=0)
    {

        a[0]=0;

        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        sort(a,a+n+1);
        a[n+1]=1422;
        int c=1;

        for(int i=1;i<=n;i++)
        {
            if((a[i]-a[i-1])>200)
            {

                c=0;
                break;
            }
        }
        if(a[n+1]-a[n]>100)
        {
            c=0;

        }

        if(c==1)cout<<"POSSIBLE"<<endl;
        else
        cout<<"IMPOSSIBLE"<<endl;
    }

    return 0;
}
