#include<bits/stdc++.h>

using namespace std;

int main()
{

    long a,b;

    while(scanf("%ld %ld",&a,&b)&&(a!=-1&&b!=-1))
    {
            long addition=0;

            for(long i=a;i<=b;i++)
            {
                if(i%10==0)
                    addition+=i/10;
                if(i%10>0)
                    addition+=i%10;
            }cout<<addition<<endl;
    }


    return 0;
}
