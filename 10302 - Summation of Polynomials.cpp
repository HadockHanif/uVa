#include<bits/stdc++.h>

using namespace std;

int main()
{


    unsigned long long ld,l;

    while(scanf("%llu",&ld)==1)
    {
        l=((ld*(ld+1))/2)*((ld*(ld+1))/2);

        printf("%llu\n",l);
    }

    return 0;
}
