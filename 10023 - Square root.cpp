#include<bits/stdc++.h>

using namespace std;

int main()
{



    int T,c=0;

    scanf("%d",&T);

    for(int i=1;i<=T;i++)
    {
        if(i!=1)cout<<endl;

        double n;

        scanf("%lf",&n);

        double x=n,y=1,e=0.000001;

        while(x-y>e)
        {
            x=(x+y)/2;
            y=n/x;
        }

        printf("%.0lf\n",x);



    }
    return 0;



}
