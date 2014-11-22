#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    map<string,int>m;
    char ch[1000],s[1000];

    cin>>t;
    getchar();
    for(int i=1;i<=t;i++)
    {
        string ss;
        int d,ti,sub,D;

        cin>>sub;
        getchar();
        for(int j=1;j<=sub;j++)
        {
            gets(ch);

            sscanf(ch,"%s %d",&s,&d);

            m[string(s)]=d;

        }
        cin>>D;
        cin>>ss;

        if(m.find(ss)==m.end())
        {
            cout<<"Case "<<i<<": Do your own homework!"<<endl;
        }
        else
        {
            if(m[ss]<=D)
                cout<<"Case "<<i<<": "<<"Yesss"<<endl;
            else if(m[ss]<=(D+5))
               cout<<"Case "<<i<<": "<<"Late"<<endl;
            else
            cout<<"Case "<<i<<": Do your own homework!"<<endl;
        }

m.clear();



    }
    return 0;
}
