#include<bits/stdc++.h>

using namespace std;


#define READ(f)     freopen(f,"r",stdin)
#define WRITE(f)    freopen(f,"w",stdout)
#define sc          scanf
#define pf          printf
#define mem(a,val)  memset(a,val,sizeof(a))
#define rep(s,n)    for(long i=s; i<=n;i++)
#define pb          push_back
#define ll          long long
#define pi          (2*acos(0.0))
#define mx          40005
#define ssc         sscanf
#define FOR(val,n)  for(long i=val;i<=n;i++)
#define FORL(val,n) for(long i=val;i<n;i++)
#define PQ          priority_queue
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

long dp[mx];
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");

    long n;




    while(sc("%ld",&n) == 1){

        vector<long>v;
        mem(dp,0);

        dp[0] =1;


        long m;
        double sum = 0.0;

        //sc("%ld",&m);

        FOR(1,n){

            long a;

            sc("%ld",&a);

            v.pb(a);
            sum += (a);
        }

        sum = sum/2.0;

        //cout<<sum<<endl;
        FORL(0,v.size()){

            long a = v[i];

            for(long j = sum; j>=0;j--){


                    if(dp[j] != 0 && (a+j) <= sum)
                    {
                        dp[j+a] = 1;
                    }
            }
        }

        long ans = 0;
        for(long i = sum; i>= 0;i--){

            if(dp[i] != 0)
            {
                ans = 2*(sum - double(i));
                break;
            }
        }

        if(ans == 0)
        pf("YES\n");
        else
        pf("NO\n");
    }


    return 0;
}


