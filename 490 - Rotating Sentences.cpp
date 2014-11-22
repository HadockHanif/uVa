#include<bits/stdc++.h>

using namespace std;

string s1,s2;

void f1(int len,int l2)
{

        for(int i=0;i<len;i++)
        {
            if(i>l2-1)
            cout<<" ";
            else
            cout<<s2[i];
            cout<<s1[i];

            cout<<endl;
        }

}
void f2(int len,int l1)
{
    for(int i=0;i<len;i++)
    {
        cout<<s2[i];

        if(i>l1-1)cout<<" ";
        else cout<<s1[i];

    cout<<endl;
    }
}


int main()
{



    while(getline(cin,s1)&&getline(cin,s2))
    {

        int l1,l2,len;
        l1=s1.length();
        l2=s2.length();

        len=max(l1,l2);

        //cout<<len<<endl;

        if(len==l1)
        {
            f1(len,l2);
        }
        else
        f2(len,l1);

    }

    return 0;
}
