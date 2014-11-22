#include<bits/stdc++.h>

using namespace std;

int main()
{

    map<string,int>mapp;
    string c="a";

    for(int  i=0;i<=25;i++)
    {
        mapp[c]=i;
        c[0]=c[0]+i;
        cout<<c[0];
    }

    cout<<mapp["z"];






    return 0;
}
