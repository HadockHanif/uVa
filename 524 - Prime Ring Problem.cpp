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
#define mx          35000
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

bool prime[35];
vector<long>s;
bool mark[20];
vector<long>permutation;


void back_track(){


    if(s.size() == permutation.size()){

        pf("1");
        FORL(0,permutation.size()){


            pf(" %ld",permutation[i]);
        }
        pf("\n");

    }

    else
    {
        FORL(0,s.size())
        {
            if(mark[i] == 0)
            {
                mark[i] = 1;
                permutation.pb(s[i]);

                if(permutation.size() == 1)
                {
                    if(prime[1+s[i]] == 1)
                    back_track();
                }
                else if(permutation.size() == s.size())
                {
                    if(prime[s[i] +1 ] == 1 && prime[permutation[permutation.size()-1]+permutation[permutation.size()-2]])
                    back_track();
                }
                else if(prime[permutation[permutation.size()-1]+permutation[permutation.size()-2]] == 1)
                back_track();
                mark[i] = 0;
                permutation.pop_back();
            }
        }
    }

}

int main()
{
    //READ("in.txt");
    //WRITE("out.txt");

    prime[2] = 1;

    prime[3] = 1;
    prime[5] = 1;
    prime[7] = 1;
    prime[11] = 1;
    prime[13] = 1;
    prime[17] = 1;
    prime[19] = 1;
    prime[23] = 1;
    prime[29] = 1;
    prime[31] = 1;

    long n,kase = 1;

    while(sc("%ld",&n) == 1)
    {
        //s = "";
        s.clear();

        if(kase != 1)
        pf("\n");
        mem(mark,0);
        permutation.clear();
        FOR(2,n){


            s.pb(i);
        }
        /*FORL(0,s.size())
        {
            cout<<s[i]<<endl;
        }*/
        //cout<<s.size();

        pf("Case %ld:\n",kase++);
        //cout<<s<<endl;
        if(n == 1)
        pf("1\n");
        else if(n == 2)
        {
            pf("1 2\n");
        }
        else if(n%2 == 0)
        back_track();
        //else



    }

    return 0;
}


