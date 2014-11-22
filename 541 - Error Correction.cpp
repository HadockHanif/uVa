#include<bits/stdc++.h>

using namespace std;




int main()
{

    int n;

    while(scanf("%d",&n)&&n!=0)
    {
            int a[200][200];
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                  cin>>a[i][j];
            }
            int c1,c2;


            for(int i=1;i<=n;i++)
            {
                c1=c2=0;
                for(int j=1;j<=n;j++)
                {
                    if(a[i][j]==1)c1++;
                    if(a[j][i]==1)c2++;
                }
                if(c1%2==0)a[i][n+1]=0;
                else
                   a[i][n+1]=1;
                if(c2%2==0)a[n+1][i]=0;
                else
                  a[n+1][i]=1;
            }
            c1=c2=0;
            for(int i=1;i<=n;i++)
            {
                if(a[i][n+1]==1)c1++;
                if(a[n+1][i]==1)c2++;
            }
            if((c1==c2)&&((c1%2)==0&&(c2%2==0)))cout<<"OK"<<endl;
            else
            {
                if(c1==1&&c2==1)
                {
                    for(int i=1;i<=n;i++)
                    {
                        if(a[i][n+1]==1)c1=i;
                        if(a[n+1][i]==1)c2=i;
                    }
                    printf("Change bit (%d,%d)\n",c1,c2);
                }
                else
                  cout<<"Corrupt"<<endl;
            }

    }

    return 0;
}
