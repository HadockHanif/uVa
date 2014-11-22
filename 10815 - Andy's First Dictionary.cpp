#include<bits/stdc++.h>


using namespace std;

int main()
{

    string s;
    set<string>st;

    while(cin>>s)
    {
        string p="";
        int len=s.size();

        for(int i=0;i<=len;i++)
        {
            if(isalpha(s[i]))
            p+=tolower(s[i]);
            else if(p!="")
            {
                st.insert(p);
                p="";
            }
        }


    }

    set<string>::iterator it;

    for(it=st.begin();it!=st.end();it++)
    cout<<*it<<endl;
    return 0;
}
