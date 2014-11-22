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

        do
        {
            cout<<s<<endl;
        }while(next_permutation(s.begin(),s.end()));
cout<<endl;

    }

    return 0;
}
