#include<bits/stdc++.h>

using namespace std;

map<long,long>m;
vector<long>v;
long n;
int main()
{

    char ch[10005];



    while(scanf("%ld",&n)==1)
    {
        if(!m[n])
            v.push_back(n);
        m[n]++;
    }
    for(unsigned int i=0; i<v.size(); i++)
        printf("%ld %ld\n",v[i],m[v[i]]);

    return 0;
}
