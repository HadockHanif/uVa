#include<bits/stdc++.h>

using namespace std;

map<string,int> m;
int main()
{


    char ch[100];
    string s;
    int t;


    scanf("%d\n",&t);

    while(t--&&cin>>s&&gets(ch))
    {

            m[string(s)]++;






    }
    for( map<string,int >::iterator it=m.begin();it!=m.end();it++)
            {
                printf("%s %d\n",it->first.c_str(),it->second);
            }



    return 0;
}
