#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch,s;

    int b1,b2;




    while(cin>>s>>b1>>b2)
    {
       long long num=0;

        ch="";

        if(s.length()==1&&s[0]=='0')
        {
            cout<<"       0"<<endl;
            continue;
        }
        else
        {
            bool b=false;

            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='0'&&b==false)
                continue;
                else
                    b=true;
                    ch+=s[i];
            }
            if(b==false)
            {
                cout<<"      0"<<endl;
                continue;
            }
        }

        vector< int >v,t;

        int len=ch.length();




        for(int i=0;i<len;i++)
        {
            if(isdigit(ch[i]))
            v.push_back(ch[i]-'0');
            else
            {
                v.push_back(ch[i]-55);
            }
        }

        if(b1==b2)
        {
            if(v.size()>7)
            {
                cout<<"  ERROR"<<endl;
                continue;
            }
            else
            {
                for(int i=0;i<v.size();i++)
                cout<<v[i];
                cout<<endl;
                continue;
            }
        }
        else
        {
            int digit=v.size()-1;

            for(int i=0;i<v.size();i++)
            {
                    num=num+(v[i]*pow(b1,digit));
                    digit--;
            }
            long long temp=num;

            while(temp!=0)
            {
                t.push_back(temp%b2);
                temp=temp/b2;
            }

        }

    if(t.size()>7)
    cout<<"  ERROR"<<endl;
    else
    {
        for(int i=1;i<=(7-t.size());i++)cout<<" ";
        for(int i=t.size()-1;i>=0;i--)
        {
            if(t[i]==10)cout<<"A";
            else if(t[i]==11)cout<<"B";
            else if(t[i]==12)cout<<"C";
            else if(t[i]==13)cout<<"D";
            else if(t[i]==14)cout<<"E";
            else if(t[i]==15)cout<<"F";
            else
            cout<<t[i];
        }

        cout<<endl;
    }
    }

    return 0;
}
