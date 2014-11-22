/*
ID: hanifbo1
PROG: ride
LANG: C++
*/
#include<bits/stdc++.h>

using namespace std;

#define DD          double
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


int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    //ofstream fout ("ride.out");
    //ifstream fin ("ride.in");
    string s;
    bool b = true;
    char c = '\'';
    while(getline(cin,s)){
        //b = true;
        FORL(0,s.length()){

            if(s[i] == '"')
            {
                if(b == true){

                    cout<<"``";
                    b = false;
                }
                else
                {
                    cout<<c<<c;
                    b = true;
                }
            }
            else{
                cout<<s[i];
            }
        }
        cout<<endl;
    }

    return 0;
}


