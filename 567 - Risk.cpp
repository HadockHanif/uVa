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

vector<long>graph[25];
long des[25];
bool visit[25];

long bfs(long src,long d)
{
        queue<long>que;
        //cout<<"BFS"<<endl;
        mem(visit,0);
        mem(des,0);
        visit[src] = 1;
        des[src] = 0;
        que.push(src);
            /*FOR(1,20)
            {
                cout<<"size "<<i<<" "<<graph[i].size()<<endl;
            }*/

        while(!que.empty()){


                long crnt = que.front();
                que.pop();

                FORL(0,graph[crnt].size()){

                        long nxt = graph[crnt][i];

                        //cout<<"innner"<<endl;

                        if(visit[nxt] == 0){
                                //cout<<"don "<<des[nxt]<<endl;
                                visit[nxt] = 1;
                                que.push(nxt);

                                des[nxt] = des[crnt]+1;
                        }
                }
        }

        return des[d];
}


int main()
{
    //READ("in.txt");
    //WRITE("out.txt");

    long cnt = 1,n,kase = 1;

    while(sc("%ld",&n) == 1){

        long a,b;
        if(cnt == 1)
        {
            FOR(1,20)
            graph[i].clear();
        }


        if(cnt == 20)
        {
            //sc("%ld",&a);
            cnt = 1;

            pf("Test Set #%ld\n",kase++);
            long s,d;

            FOR(1,n){

                sc("%ld %ld",&s,&d);


                //cout<<"s and d "<<s<<" "<<d<<endl;

                /*for(long i=0;i<graph[s].size();i++){

                        cout<<graph[s][i]<<endl;
                }*/
                long ans = bfs(s,d);

                pf("%2ld to %2ld: %ld\n",s,d,ans);
            }
            pf("\n");
            continue;
        }
        //sc("%ld",&a);

        FOR(1,n){
            //cout<<"input"<<endl;
            sc("%ld",&b);
            graph[cnt].pb(b);
            graph[b].pb(cnt);

        }

        //cout<<"size "<<graph[cnt].size()<<endl;
        cnt++;
    }

    return 0;
}


