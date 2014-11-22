#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        vector<string>v;
        vector<string>v1;


        do
        {
            v.push_back(s);
        }while(next_permutation(s.begin(),s.end()));

        for(int j=0;j<v.size();j++)
        {
            int c=0;
            if(j==0)
            {
                cout<<v[j]<<endl;
                v1.push_back(v[j]);
            }
            else
            {
                for(int k=0;k<v1.size();k++)
                {
                    if(v[j]==v1[k])
                    c++;
                }
                if(c==0)
                {
                    cout<<v[j]<<endl;
                    v1.push_back(v[j]);
                }
            }
        }
    }

    return 0;
}
