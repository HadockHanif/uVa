#include<bits/stdc++.h>

using namespace std;

long arr[1000005];
int main()
{


    arr[3]=0;

    long k=0;

    for( long i=4;i<=1000000;i++)
    {
        k=k+((i-2)/2);
        arr[i]=arr[i-1]+k;

    }

     long n;

    while(scanf("%ld",&n) && n >= 3)
    {
        printf("%ld\n",arr[n]);
    }


    return 0;
}
