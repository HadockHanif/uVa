#include<bits/stdc++.h>

using namespace std;

int a[210];


int main()
{


    int t;

    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int n;

        cin>>n;

        for(int j=1;j<=n;j++)
        {
            cin>>a[j];
        }
        int summ=0;
        int sumj=0;


        for(int j=1;j<=n;j++)
        {
            int m=a[j]+1;


            while(m!=0&&m>0)
            {
                m=m-30;
                summ=summ+10;
            }
            m=a[j]+1;
            while(m!=0&&m>0)
            {
                m=m-60;
                sumj=sumj+15;
            }
        }


        if(sumj<summ)
        {
            printf("Case %d: Juice %d\n",i,sumj);
        }
        else if(summ<sumj)
        {
            printf("Case %d: Mile %d\n",i,summ);
        }
        else
        {
            printf("Case %d: Mile Juice %d\n",i,summ);
        }

    }

    return 0;
}
