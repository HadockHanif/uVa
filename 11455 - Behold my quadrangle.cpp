#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int a[8];

        cin>>a[0]>>a[1]>>a[2]>>a[3];
        bool b=0;

        if((a[0]==a[1])&&(a[1]==a[2])&&(a[2]==a[3]))
            {
                cout<<"square"<<endl;
                b=1;
            }
        if(a[0]==a[1]&&b==0)
        {
            if(a[2]==a[3])
            {
                cout<<"rectangle"<<endl;
                b=1;
            }
        }
        if(a[0]==a[2]&&b==0)
        {
            if(a[1]==a[3])
            {
                cout<<"rectangle"<<endl;
                b=1;
            }
        }
        if(a[0]==a[3]&&b==0)
        {
            if(a[1]==a[2])
            {
                cout<<"rectangle"<<endl;
                b=1;
            }
        }
        if(a[1]==a[2]&&b==0)
        {
            if(a[0]==a[3])
            {
                cout<<"rectangle"<<endl;
                b=1;
            }
        }
        if(a[1]==a[3]&&b==0)
        {
            if(a[0]==a[2])
            {
                cout<<"rectangle"<<endl;
                b=1;
            }
        }
        if(a[2]==a[3]&&b==0)
        {
            if(a[0]==a[1])
            {
                cout<<"rectangle"<<endl;
                b=1;
            }
        }
        if((a[0]<=(a[1]+a[2]+a[3]))&&(a[1]<=(a[0]+a[3]+a[2]))&&(a[2]<=(a[0]+a[1]+a[3]))&&(a[3]<=(a[0]+a[2]+a[1]))&&b==0)
        {
            cout<<"quadrangle"<<endl;
            b=1;
        }
        if(b==0)
        cout<<"banana"<<endl;
    }

    return 0;
}
