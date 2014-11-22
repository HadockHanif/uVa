#include<bits/stdc++.h>

using namespace std;


int digit[10000001];


int main()
{

    double d=0.0;



    for(int i=1; i<=10000000; i++)
    {
        d=d+log10(i);

        digit[i]=d;
    }




    int t;

    cin>>t;

    for(int i=1; i<=t; i++)
    {
        long n,n1;

        scanf("%ld",&n);

        if(n==1)
        {
            cout<<"1"<<endl;
            continue;
        }


            printf("%d\n",(digit[n])+1);





    }

    return 0;
}
