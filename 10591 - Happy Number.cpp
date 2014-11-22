#include<bits/stdc++.h>

using namespace std;
bool happy[1000000005];

void H()
{


    for(long i=12; i<=1000000000; i++)
    {
        long temp=i,sum=0;

        while(temp!=0)
        {
            sum=sum+((temp%10)*(temp%10));
            temp=temp/10;

        }
        if(sum<i)
        }


}


int main()
{
    happy[2]=1;
    happy[3]=happy[4]=happy[5]=happy[6]=happy[8]=happy[9]=happy[11]=1;

    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        long n,temp;



    }

    return 0;
}
