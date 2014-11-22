#include<bits/stdc++.h>

using namespace std;


long long ar[50],arr[50];

int main()
{


    ar[0]=0;
    ar[1]=1;

    arr[0]=1;
    arr[1]=2;

    for(int i=2;i<=44;i++)
    {
        ar[i]=ar[i-1]+ar[i-2]+1;
        arr[i]=arr[i-1]+arr[i-2]+1;
    }


    int i;
    while(scanf("%d",&i)&&i!=-1)
    {
        printf("%lld %lld\n",ar[i],arr[i]);
    }



    return 0;
}
