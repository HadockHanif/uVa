#include<bits/stdc++.h>

using namespace std;

int GCD(int a,int b)
{

     if(a<b)swap(a,b);
     int temp;

     while(a%b!=0)
     {
         temp=a;
         a=b;
         b=temp%b;

     }
     return b;
}

int main()
{

    int g=0,N;

    while(cin>>N&&N!=0)
    {
        g=0;
        for(int i=1;i<N;i++)
        {
            for(int j=i+1;j<=N;j++)
                g+=GCD(i,j);
        }
        cout<<g<<endl;

    }

    return 0;
}
