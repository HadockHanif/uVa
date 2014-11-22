#include<bits/stdc++.h>

using namespace std;

int main()
{

    long n;

    while(scanf("%ld",&n)&&n!=0)
    {
        priority_queue< long >pq;

        for(long i=0;i<n;i++)
        {
            long d;
            scanf("%ld",&d);
            pq.push(-d);
        }
        long sum=0,d,b,c;
        for(long i=0;i<n-1;i++)
        {
            d=-pq.top();
            pq.pop();
            b=-pq.top();
            pq.pop();
            c=d+b;
            sum=sum+c;
            pq.push(-c);
        }

        printf("%ld\n",sum);
    }

    return 0;
}
