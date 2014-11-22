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

struct node
{
    string name;
    long gain,loss;
};


node arr[2005];

int main()
{

    long n;
    long kase = 1;

    while(sc("%ld",&n)==1)
    {
string s;
        if(kase > 1)
        pf("\n");
        map<string,long>mp;
        for(long i=1; i<=n; i++)
        {


            cin>>s;
            mp[s]=i;
            arr[i].name = "";
            arr[i].name = s;

            arr[i].loss = arr[i].gain = 0;
        }
        for(long i=1; i<=n; i++)
        {

            cin>>s;
            long temp;
            sc("%ld",&temp);


            long x;
            sc("%ld",&x);
//cout<<"X "<<x<<endl;
            long E;

            if(x == 0)
            continue;


            arr[mp[s]].loss += temp;
            if(x != 0)
            {

                E = temp / x;
//cout<<"complete"<<endl;
                arr[mp[s]].gain += (temp -(E*x));
            }

            for(long j=1; j <= x; j++)
            {
                cin>>s;
                arr[mp[s]].gain += E;
            }

        }


//cout<<"complete 2"<<endl;
        for(long i=1; i<=n; i++)
        {
            cout<<arr[i].name<<" "<<arr[i].gain-arr[i].loss<<endl;
        }

        kase++;
//cout<<endl;
    }
    return 0;
}

