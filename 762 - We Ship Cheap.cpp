#include<bits/stdc++.h>

using namespace std;


#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define sc scanf
#define pf printf
#define mem(a,val) memset(a,val,sizeof(a))
#define rep(s,n) for(long i=s; i<=n;i++)
#define pb push_back
#define ll long long
#define pi (2*acos(0.0))
#define mx 35000
#define ssc sscanf
#define FOR(val,n) for(long i=val;i<=n;i++)
#define FORL(val,n) for(long i=val;i<n;i++)
#define PQ priority_queue
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

vector<long>graph[1000];
map<string,long>mp;

bool visit[1001];
long par[1001];

void bfs(long src,long d){


    mem(visit,0);
    mem(par,0);


    queue<long>que;

    que.push(src);

    visit[src] = 1;

    while( !que.empty() ){


            long crnt = que.front();
            que.pop();

            FORL(0,graph[crnt].size()){

                long nxt = graph[crnt][i];

                if(visit[nxt] == 0)
                {
                    visit[nxt] = 1;

                    que.push(nxt);
                    par[nxt] = crnt;
                }
            }
    }
}



int main()
{
    //READ("in.txt");
    //WRITE("out.txt");

    long n,kase = 1;

    while(sc("%ld",&n) == 1){

        if(kase != 1)
        pf("\n");
        mp.clear();
        long cnt = 1;
        string arr[1001];

        FOR(1,n){


            string s1,s2;

            cin>>s1>>s2;

            //cout<<s1<<endl<<s2<<endl;
            if(mp.find(s1) == mp.end()){

                graph[cnt].clear();
                arr[cnt] = s1;
                mp[s1] = cnt++;
            }
            if(mp.find(s2) == mp.end()){

                graph[cnt].clear();
                arr[cnt] = s2;
                mp[s2] = cnt++;
            }

            graph[mp[s1]].pb(mp[s2]);
            graph[mp[s2]].pb(mp[s1]);
        }

        string s1,s2;

        cin>>s1>>s2;

        bfs(mp[s1],mp[s2]);

        long d = mp[s2];

        if(par[d] == 0)
        {
            pf("No route\n");
            continue;
        }
        vector<string>v;

        while(par[d] != 0){

                v.pb(arr[d]);

                d = par[d];
        }

        cout<<arr[mp[s1]];
        string s = "";
        long c = 1;
        for(long i = v.size()-1; i >= 0; i--){


                if(c == 1)
                {
                    cout<<" "<<v[i]<<endl;
                    s = v[i];
                }
                else{


                    cout<<s<<" "<<v[i]<<endl;
                    s = v[i];
                }


                c++;
        }
        kase++;

    }

    return 0;
}


