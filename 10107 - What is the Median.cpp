#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>

using namespace std;

long long ar[10005];

int main()
{

    int pos=1,pos1;
     long long med;
    while(scanf("%lld",&ar[pos++])==1)
    {

       med=0;
        sort(ar,ar+pos);
        if((pos-1)%2==0){

          med=ar[(pos-1)/2]+ar[(pos-1)/2+1];
          printf("%lld\n",med/2);

          }

        else
          printf("%lld\n",ar[pos/2]);




    }




    return 0;
}
