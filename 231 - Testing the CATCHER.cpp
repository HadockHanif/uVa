#include<bits/stdc++.h>

using namespace std;

vector<long>v;

long L[10000005];

long LIS()
{
        for(long i=0;i<v.size();i++)
        L[i]=1;

        //cout<<L[3]<<endl;

        for(long i=v.size()-1; i >= 0; i--)
        {
            for(long j=i-1; j >= 0; j--)
            {
                if(v[j]>v[i])
                {
                    if(L[j]<(L[i]+1))
                    L[j] = L[i]+1;
                }
            }
        }
        long max=0;
        for(long i=0; i<v.size(); i++)
        {
            if(L[i]>max)max=L[i];
        }

        return max;
}


int main()
{

    int kase=1;

    long n,p_value=-1;

    while(scanf("%ld",&n) )
    {



        if(p_value == -1 && n==-1)break;


        else if(n == -1 && p_value !=-1)
        {
            if(kase!=1)printf("\n");

            p_value=n;
            long ans=0;
            ans=LIS();

            printf("Test #%d:\n  maximum possible interceptions: %ld\n",kase++,ans);



            v.clear();


        }
        else
        {
                p_value = n;
                v.push_back(n);
        }


    }

    return 0;
}
