#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long n,i,j;

    while(cin>>n>>i>>j)
    {
        int c=1;
        if(i%2!=0)i=i+1;

        if(j%2!=0)j=j+1;

        if(i==j)c++;

        while(i!=j)
        {
            if(i%2!=0)i++;
            if(j%2!=0)j++;

            i=i/2;
            j=j/2;
            c++;
        }
        cout<<c-1<<endl;

    }


    return 0;
}
