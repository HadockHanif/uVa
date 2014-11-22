#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

bool square[100005];


int main()
{



    for(int i=1;i<=316;i++)
        square[i*i]=1;


        long long a,b,c;


        while(scanf("%lld %lld",&a,&b)&&(a!=0&&b!=0))
        {

            c=0;
            for(long long i=a;i<=b;i++)
            {
                if(square[i]==1)
                   c++;
            }
            printf("%lld\n",c);

        }

}
