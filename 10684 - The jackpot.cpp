
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n;

    while(scanf("%ld",&n)&&n!=0)
    {




        long mxV=-99999,sum=0,a;

        for(int i=0;i<n;i++)
        {
            scanf("%ld",&a);
            sum=sum+a;
            if(sum>mxV)mxV=sum;
            if(sum<0)sum=0;

        }
        if(mxV>0)
        printf("The maximum winning streak is %ld.\n",mxV);
        else
        printf("Losing streak.\n");


    }


    return 0;
}
