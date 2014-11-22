#include<bits/stdc++.h>

using namespace std;

int main()
{

    bool a,b,c;

    while(cin>>a>>b>>c)
    {
        if((a==1&&b==1&&c==1)||(a==0&&b==0&&c==0))
          cout<<"*"<<endl;
        else if(a==b)cout<<"C"<<endl;
        else if(a==c)cout<<"B"<<endl;
        else if(b==c)cout<<"A"<<endl;
    }

    return 0;
}
