#include<bits/stdc++.h>

using namespace std;

int main()
{

    long kase=1;

    long long b,s;

    while(scanf("%lld %lld",&b,&s))
    {
        if(b==0&&s==0)break;

        double r1=ceil((double)s/b);



       if((b-1)==0)
        {
            printf("Case %d: :-\\\n",kase++);
            continue;
        }
       double r2=ceil((double)s/b);
       if(b==s||b<s)
        printf("Case %d: :-|\n",kase++);
       else if(b>s)
        printf("Case %d: :-(\n",kase++);
       else
        printf("Case %d: :\)\n",kase++);
    }

    return 0;
}
