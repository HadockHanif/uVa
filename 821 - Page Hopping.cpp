/*
ID: hanifbo1
PROG: ride
LANG: C++
*/
#include<bits/stdc++.h>

using namespace std;

#define DD          double
#define eps         0.000001
#define FastIO      ios_base::sync_with_stdio(0); cin.tie(0)
#define READ(f)     freopen(f,"r",stdin)
#define WRITE(f)    freopen(f,"w",stdout)
#define sc          scanf
#define pf          printf
#define mem(a,val)  memset(a,val,sizeof(a))
#define rep(s,n)    for(long i=s; i<=n;i++)
#define pb          push_back
#define ll          long long
#define pi          (2*acos(0.0))
#define mx          35000
#define ssc         sscanf
#define FOR(val,n)  for(long i=val;i<=n;i++)
#define FORL(val,n) for(long i=val;i<n;i++)
#define PQ          priority_queue
#define sr(v)       sort(v.begin(),v.end())

long GCD(long a,long b)
{
    if(b==0)return a;

    return GCD(b,a%b);
}

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
long node[102];

long alist[105][105];
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    //ofstream fout ("ride.out");
    //ifstream fin ("ride.in");

    //bool b = true;



    long u,v,ks = 1;
    long cnt = 0;

    mem(alist,1);
    //long ans = 0;
    long Mx = 0;
    long T = 0;
    while(sc("%ld %ld",&u,&v) == 2){


        if(u == 0 && v== 0 && cnt == 1)
        {
            break;
            //cnt++;
        }
        else if(u == 0 && v==0)
        {
            cnt++;

            //Mx = 0;
            for(long i = 1; i<=Mx;i++){

                for(long j = 1;j<=Mx;j++)
                {
                    for(long k = 1; k<=Mx;k++)
                    if(alist[j][i]+alist[i][k] < alist[j][k])
                    alist[j][k] = alist[j][i]+alist[i][k];
                }
            }
            long temp = alist[0][0];

            long ans = 0;

            for(long i = 1;i<=Mx;i++)
            {
                for(long j = 1;j<=Mx;j++)
                {
                    if(i != j && alist[i][j] != temp)
                    ans += alist[i][j];
                }
            }


            pf("Case %ld: average length between pages = %.3lf clicks\n",ks++,(double)ans/(T*(T-1)));
            Mx = 0;
            ans = 0;
            mem(alist,1);
            mem(node,0);
            T = 0;
        }
        else{

            cnt = 0;
            if(node[u] == 0)
            {
                node[u] = 1;
                T++;
            }
            if(node[v] == 0)
            {
                node[v] = 1;
                T++;
            }
            alist[u][v] = 1;
            if(v>Mx)
            Mx = v;
            if(u>Mx)
            u = Mx;
        }
    }

    return 0;
}


