#include<bits/stdc++.h>

using namespace std;
char ch[30];
long r,cnt;

#define ll long long
#define sc scanf
#define pf printf
#define rep(k,m) for(long i=k;i<=m;i++)

void swap(char *x,char *y)
{
        char temp;
        temp = *x;
        *x = *y;
        *y = temp;
}


vector<char>v;

bool taken[30];

void permute(char *a,long b,long e)
{
            if(v.size() == e && cnt<r)
            {
cnt++;

                for(long k=0;k<e;k++)
                printf("%c",v[k]);

                cout<<endl;
                return ;
            }
            else if(cnt>=r)
            return;

            for(long j=0;j<e;j++)
            {
                if(taken[j] == 0)
                {
                    taken[j]=1;
                    v.push_back(a[j]);
                permute(a,0,e);
                taken[j]=0;v.pop_back();
                }
            }

//            for()

}

int main()
{
    ch[1]='A';
    rep(1,26)
    {
        ch[i+1]='A'+i;
    }
    //cout<<ch[26]<<endl;


    long t;

    sc("%ld",&t);

    rep(1,t)
    {
            char s[27];
            long n;
            cnt=0;
            sc("%ld %ld",&n,&r);

            for(long j=0;j<n;j++)
            s[j]=ch[j+1];

            s[n]='\0';

            printf("Case %ld:\n",i);


permute(s,0,n);
getchar();
            //cout<<s[0]<<s[1]<<s[2]<<endl;


    }


    return 0;
}
