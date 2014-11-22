#include<bits/stdc++.h>

using namespace std;

bool p[20000005];
vector<long>vpr;

void seive()
{

        p[1]=1;
        p[0]=1;

        for(long i=4;i<=20000000;i=i+2)p[i]=1;

        for(long i=3;i<=sqrt(20000000);i=i+2)
        {
            if(p[i]==0)
            {
                for(long j=2*i;j<=20000000;j=j+i)
                    p[j]=1;
            }
        }
        vpr.clear();
        vpr.push_back(2);

        for(long i=3;i<=20000000;i=i+2)
        {
            if(p[i]==0)
              vpr.push_back(i);
        }



}




int main()
{
        seive();

        vector<long>tprime;

        for(long i=1;i<vpr.size();i++)
        {
                 if(vpr[i]-vpr[i-1]==2)tprime.push_back(vpr[i-1]);
        }
        long in;

        while(scanf("%ld",&in)==1)
        {

            printf("(%ld, %ld)\n",tprime[in-1],tprime[in-1]+2);




        }


    return 0;
}
