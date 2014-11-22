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


ll modInverse(ll a,ll m)
{


    return bigMod(a,m-2,m);

}
long capct[105][105];
long visited[105];
long parent[105];
long n;
long src;
long tar;

bool find_augmenting_path(){


    mem(parent,-1);
    mem(visited,0);

    visited[src] = 1;

    queue<long>Q;
    Q.push(src);


    while(!Q.empty()){//use BFS for finding the augmenting path :|


        long crnt = Q.front();
        Q.pop();

        if(crnt == tar)return true;// find path to the target :D

        FOR(1,n){


            if(capct[crnt][i] && !visited[i]){

                    Q.push(i);
                    visited[i] = 1;
                    parent[i] = crnt;
            }
        }
    }

    return false; //Do not find path :(
}


long trace_augmenting_path(){

        long crnt = tar;

        long prev = parent[tar];
        long flow = capct[prev][crnt];


        while(prev != -1){

                flow = min(flow,capct[prev][crnt]);
                crnt = prev;
                prev = parent[crnt];
        }return flow;
}

void adjust_capacity(long flow){


    long crnt = tar;
    long prev = parent[crnt];

    while(prev != -1){

        capct[prev][crnt] -= flow;
        capct[crnt][prev] +=flow;
        crnt = prev;
        prev = parent[crnt];

    }
}
//main function for find maxflow

long MaxFlow(){


    long max_flow = 0;

    while(find_augmenting_path()){


            long flow = trace_augmenting_path();
            adjust_capacity(flow);
            max_flow += flow;
    }

    return max_flow;

}




int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    //ofstream fout ("ride.out");
    //ifstream fin ("ride.in");
    long ks = 1;

    while(sc("%ld",&n) && n!=0){

            long s,t,c;

            sc("%ld %ld %ld",&src,&tar,&c);
            mem(capct,0);
            FOR(1,c){


                    long a,b,c;
                    sc("%ld %ld %ld",&a,&b,&c);

                    capct[a][b] += c;
                    capct[b][a] += c;
            }
            long ans = MaxFlow();

            pf("Network %ld\nThe bandwidth is %ld.\n\n",ks++,ans);

    }

    return 0;
}


