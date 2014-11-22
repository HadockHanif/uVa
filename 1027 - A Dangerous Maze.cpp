/*
ID: hanifbo1
PROG: ride
LANG: C++
*/
#include<bits/stdc++.h>

using namespace std;

#define DD          double
#define llu            unsigned long long
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
#define mod         1000000007

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


long long bigMod(long long b,long long p, long long m)
{
    //cout<<"eee"<<endl;
    if(b == 1)
        return b;
    if(p == 0 )return 1;
    if( p == 1)return b;
    if(p%2 == 0)
    {
        ll temp = bigMod(b,p/2,m);
        return (temp*temp)%m;
    }
    else
        return (b  *  bigMod(b,p-1,m))%m;
}
long LCM(long a,long b){

    return ((a*b)/GCD(a,b));
}


ll modInverse(ll a,ll m)
{


    return bigMod(a,m-2,m);

}

long ar[102];
long up[102],down[102];
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    //ofstream fout ("ride.out");
    //ifstream fin ("ride.in");

    long t,ks = 1;

    sc("%ld",&t);

    while(t--){

        long n;

        sc("%ld",&n);
        long cnt = 0;

        FOR(1,n){

            sc("%ld",&ar[i]);

            if(ar[i] < 0)
            cnt++;
        }

        long dd = 1,uu = 0;
        pf("Case %ld: ",ks++);

        if(cnt == n)
        {
            pf("inf\n");
            continue;
        }
        else{

            FOR(1,n){

                if(ar[i] > 0){

                    long g = GCD(ar[i],n);
                    up[i] = ar[i]/g;
                    down[i] = n/g;
                    dd = LCM(dd,down[i]);
                    //cout<<dd<<endl;
                }
                else{

                    long val = abs(ar[i]);
                    long g = GCD(val,n);

                    up[i] = val/g;
                    down[i] = n/g;
                    dd = LCM(down[i],dd);

                }
            }

            long g = GCD(cnt,n);
            long u = cnt/g;
            long v = n/g;
            //dd = LCM(dd,v);
            //cout<<dd<<endl;
            long val = v - u;
            long gcd = GCD(val,v);

            FOR(1,n){

                long tmp = dd/down[i];
                if(dd != 1)
                uu+=(tmp*up[i]);
                else
                uu += up[i];
            }
            //cout<<val<<v<<endl;

        long GG = GCD(u,dd);

        uu  = (uu * (v/gcd));
        dd = (dd*(val/gcd));

        long ggg = GCD(uu,dd);
        pf("%ld/%ld\n",uu/ggg,dd/ggg);
        }

    }
    return 0;
}


