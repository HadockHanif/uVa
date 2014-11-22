
#include<bits/stdc++.h>

using namespace std;

int main()
{

    double n;

    while(scanf("%lf",&n) && n != 0)
    {

        double d=(double) pow(n,0.333333333333);


        long i,j;
        bool b=0;

        for(i=d;i<=sqrt(n);i++)
        {
            for(j=1;j<=i;j++)
            {
                if(((i*i*i)-(j*j*j))==n)
                {
                    cout<<i<<" "<<j<<endl;
                    b=1;
                }
            }
            if(b==1)
            break;
        }
        if(b==0)
        cout<<"No solution"<<endl;

    }

    return 0;
}
