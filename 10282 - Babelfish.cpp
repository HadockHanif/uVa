#include<bits/stdc++.h>

using namespace std;

map<string,string>m;
char ch1[1000],ch2[1000],ch[1000];

int main()
{

    int t;

    while(1)
    {
        string s;
        gets(ch);

        t=sscanf(ch,"%s %s",ch1,ch2);

        if(t<=0)
         break;
        s=string(ch2);
        m[s]=string(ch1);
    }
    string s1;
    while(cin>>s1)
    {
        int b=m[s1].empty();

        if(!b)
          cout<<m[s1]<<endl;
        else
         cout<<"eh"<<endl;
    }


    return 0;
}
