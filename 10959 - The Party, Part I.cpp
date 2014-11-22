#include<bits/stdc++.h>

using namespace std;

vector<int>G[1005];
int parent[1005];
bool visited[1005];
int dist[1005];

void bfs()
{
    memset(dist,0,sizeof(dist));
    memset(visited,0,sizeof(visited));
    memset(parent,-1,sizeof(parent));

    queue< int >q;
    q.push(0);

    visited[0]=1;
    dist[0]=0;
    while(!q.empty())
    {
        int curnt=q.front();
        for(int i=0;i<G[curnt].size();i++)
        {
            int nxt=G[curnt][i];

            if(visited[nxt]==0)
            {
                visited[nxt]=1;
                q.push(nxt);
                dist[nxt]=dist[curnt]+1;
                parent[nxt]=curnt;
            }
        }
        q.pop();
    }

}

int main()
{
    int t,a,b;

    cin>>t;

    while(t--)
    {


        int P,D;

        cin>>P>>D;

        for(int j=1;j<=D;j++)
        {
            cin>>a>>b;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        bfs();

        for(int k=1;k<=P-1;k++)
          cout<<dist[k]<<endl;
for(int k=0;k<P;k++)
G[k].clear();
    if(t)cout<<endl;

    }

    return 0;
}
