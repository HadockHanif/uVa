#include<bits/stdc++.h>

using namespace std;

#define sc scanf
#define pf printf
#define mem(a,val) memset(a,val,sizeof(a))
#define rep(s,n) for(long i=s; i<=n;i++)
#define pb push_back
#define ll long long
#define pi (2*acos(0.0))
#define mx 35000
#define ssc sscanf

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



long par[100005];

long find(long a)
{
        if(par[a] == a)return a;
        else
        return find(par[a]);
}

void uNion(long a,long b)
{
            long u=find(a);
            long v=find(b);

            if(u == v) return;
            else
            par[u]=v;

}

int main()
{

    long t;
    bool b1 = 0;
    sc("%ld",&t);

    while(t--)
    {

            if(b1 != 0)
            cout<<endl;

            b1=1;

            long n;
            sc("%ld\n",&n);



            for(long i=1;i<=n;i++)
            par[i]=i;

            long ans1=0,ans2=0;
            char ch,c[1000];
            long a,b;

            ch = getchar();
            while(ch != '\n'  && ch != EOF)
            {


                    gets(c);
                    sscanf(c,"%ld %ld",&a,&b);

                    //sc("%c %ld %ld",&ch,&a,&b);

                    //cout<<ch<<endl;
                    if(ch == 'c')
                    uNion(a,b);
                    else
                    {
                        long u = find(a);
                        long v =find(b);

                        if(v == u)
                        ans1++;
                        else
                        ans2++;
                    }

                    ch=getchar();


            }
cout<<ans1<<","<<ans2<<endl;
    }

    return 0;
}



