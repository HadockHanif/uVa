#include<bits/stdc++.h>

using namespace std;

int main()
{

    unsigned long long n,p;


    while(scanf("%llu",&n)==1)
    {


        long c=1;
        p=1;


        while(p<n)
        {

            if(c%2!=0)
            {
                p=p*9;
                c++;

            }
            else
            {
                p=p*2;
                c++;
            }
        }
        if(c%2!=0)
        printf("Ollie wins.\n");
        else
        printf("Stan wins.\n");
    }

    return 0;
}
