#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int a[5];
        cin>>a[0]>>a[1]>>a[2];

        sort(a,a+3);

        if((a[0]+a[1])>a[2])
        cout<<"OK"<<endl;

        else
        cout<<"Wrong!!"<<endl;
    }

    return 0;
}
