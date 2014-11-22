#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<queue>
#include<string.h>
#include<vector>

 using namespace std;

vector<int>graph[100005];
int parent[100005];



 int bfs(int srt,int ttl)
 {

     int count=0;

     bool visited[100005],visit[100005];
     int dist[100005];


     memset(visited,0,sizeof(visited));
     memset(dist,0,sizeof(dist));
     memset(parent,-1,sizeof(parent));

     queue<int>q;

     q.push(srt);

     visited[srt]=1;
     dist[srt]=0;

     while(!q.empty())
     {
         int crnt=q.front();

         for(int i=0;i<graph[crnt].size();i++)
         {

             int nxt=graph[crnt][i];

             if(visited[nxt]==0)
             {
                 visited[nxt]=1;
                 q.push(nxt);
                 dist[nxt]=dist[crnt]+1;
                 parent[nxt]=crnt;
                 if(dist[nxt]>ttl)
                     {

                        count++;
                     }
             }

         }
         q.pop();


     }



 return count;

 }



 int main()
 {

    int c,node,a,b,srt,ttl,cases=1;



    while(scanf("%d",&node)&&node)
    {

     for(int i=0;i<=100000;i++)
          graph[i].clear();



            for(int i=0;i<node;i++)
            {
                cin>>a>>b;

                graph[a].push_back(b);
                graph[b].push_back(a);

            }

            while(scanf("%d %d",&srt,&ttl)&&(srt!=0||ttl!=0))
            {

                        c=bfs(srt,ttl);

                        printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cases++,c,srt,ttl);



            }





    }



     return 0;
 }

