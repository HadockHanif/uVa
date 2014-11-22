#include<bits/stdc++.h>

using namespace std;

#define sc scanf
#define pf printf
#define mem(a,val) memset(a,val,sizeof(a))
#define rep(s,n) for(long i=s; i<=n;i++)
#define pb push_back
#define ll long long
#define pi (2*acos(0.0))
#define mx 35000
#define ssc sscanf

/*bool prime[mx+5];
vector<long>v;

void sieve()
{
    for(long i=4;i<=mx; i=i+2)
    prime[i]=1;

    for(long i=3; i*i<=mx;i=i+2)
    {
        if(prime[i] == 0)
        {
            for(long j=2*i; j<=mx; j=i+j)
            prime[j]=1;
        }
    }


    v.pb(2);
    for(long i=3;i<=mx;i=i+2)
    {
        if(prime[i]==0)
        v.pb(i);
    }
}*/


long cnt;
char ch[105][105];
bool mark[105][105];
long row,col;
long dx[]={-1,-1,-1,0,0,+1,+1,+1};
long dy[]={-1,0,1,-1,+1,-1,0,+1};


void dfs(long a,long b)
{
//cout<<"BUG"<<endl;
//cout<<"if "<<ch[a][b]<<endl;
    if(a>-1&&b>-1&&a<row&&b<col&&ch[a][b] != '0'  && ch[a][b] == 'W')
    {

        if(mark[a][b] == 0)
        {
            mark[a][b]=1;
            cnt++;

            for(long k=0;k<8;k++)
            {
                dfs(a+dx[k],b+dy[k]);
            }
        }

    }

}

int main()
{

    long t;

    sc("%ld",&t);
    getchar();
    getchar();
    while(t--)
    {
            memset(ch,'0',sizeof(ch));
            char inp[105];
            row =0,col=0;
            long a,b;


            while(gets(inp)  && strlen(inp))
            {
                    if(64 < inp[0])
                    {
                        strcpy(ch[row++],inp);

                        if(col == 0)
                        col = strlen(inp);
                    }
                    else
                    {
                        cnt=0;
                        ssc(inp,"%ld %ld",&a,&b);

                        mem(mark,0);


                        dfs(a-1,b-1);


                        pf("%ld\n",cnt);
                    }
            }


            if(t)cout<<endl;
    }

    return 0;
}
