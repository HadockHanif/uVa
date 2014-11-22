#include<bits/stdc++.h>

using namespace std;


map<string,string>par;

struct edge
{
    string u,v;
    int w;
};

bool cmp( edge a, edge b )
{
    return a.w > b.w;
}

string find(string s)
{
    if(par[s]=="")return s;

    return par[s]=find(par[s]);
}



int main()
{

    int c,r;
    vector< edge >v;

    edge tem;

    int kase=1;

    while(scanf("%d %d",&c,&r))
    {
        if(c==0 && r==0)break;

        par.clear();
        v.clear();

        for(int i=1;i<=r;i++)
        {
            string u1,v1;
            int w1;
            cin>>u1>>v1>>w1;


            tem.u=u1;
            tem.v=v1;
            tem.w=w1;

            v.push_back(tem);
        }
        string c1,c2;

        cin>>c1>>c2;

        sort(v.begin(),v.end(),cmp);

        int minV=1000000;

        string u1,v1;

        for(int i=0;i<r;i++)
        {


            u1=find(v[i].u);
            v1=find(v[i].v);

            if(u1 != v1)
            {
                par[u1]=v1;

                if( v[i].w < minV)
                {
                    minV=v[i].w;
                }
            }
            if(find(c1)==find(c2))break;
        }

        printf("Scenario #%d\n%d tons\n\n",kase++,minV);

    }

    return 0;
}
