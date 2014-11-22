#include<bits/stdc++.h>

using namespace std;

bool prime[6005];
vector< int >humble;

void seive()
{

    for(int i=4;i<=6000;i=i+2)
        prime[i]=1;

    for(int i=3;i<=sqrt(6000);i=i+2)
    {
        if(prime[i]==0)
        {
            for(int j=i*2;j<=6000;j=j+i)
              prime[j]=1;
        }
    }

}

void factorization()
{

}

int main()
{

    seive();


    humble.push_back(1);
    factorization();



    int a;

    while(scanf("%d",&a)&&a!=0)
    {

    }
    return 0;
}
