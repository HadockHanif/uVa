#include<bits/stdc++.h>

using namespace std;

int main()
{

    map<char,int>mp;
    char c='M';
    mp[c]=1;
    c='A';
    mp[c]=3;
    c='R';
    mp[c]=2;
    c='G';
    mp[c]=1;
    c='I';
    mp[c]=1;
    c='T';
    mp[c]=1;


    int t;

    cin>>t;

    for(int i=1;i<=t;i++)
    {
        vector<int>v;
        map<char,int>mp1;



        string s;

        cin>>s;

        for(int j=0;j<s.length();j++)
        {
            mp1[char(s[j])]++;
        }
        int c=1;
        for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++)
        {
            if(mp1[it->first]==0)
            {
                c=0;
                break;
            }
            else
            {
                int d=mp1[it->first]/mp[it->first];
                v.push_back(d);
            }
        }
        sort(v.begin(),v.end());
        if(c==0||v[0]==0)cout<<"0"<<endl;
        else
        cout<<v[0]<<endl;


    }



    return 0;
}
