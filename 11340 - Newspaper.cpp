#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin>>t;

    for(int i=1;i<=t;i++)
    {
        long m;
        string s;
        double cent;
        int k;
        char c;
        map<char,double>mp;

        cin>>k;

        for(int j=1;j<=k;j++)
        {
            cin>>c;
            scanf("%lf",&cent);

            mp[char(c)]=cent;

        }

        double sum=0;
        cin>>m;
        getchar();
        for(int j=1;j<=m;j++)
        {
            getline(cin,s);

            for(int l=0;l<s.length();l++)
            {
                c=s[l];
                sum=sum+mp[char(c)];
            }
            s.clear();
        }
        printf("%.2lf$\n",sum/100);

    }

    return 0;
}
