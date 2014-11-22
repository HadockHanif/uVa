#include<bits/stdc++.h>
//#include<>

using namespace std;

int main()
{

    string s,t;

    char ch1[200005],ch2[200005];


    while(scanf("%s %s",ch1,ch2)==2)
    {
        long i=0;

        for(long j=0; ch1[i]&&ch2[j]; j++)
        {
            if(ch1[i]==ch2[j])
            i++;
        }

        if(!ch1[i])
        puts("Yes");
        else
        puts("No");
    }

    return 0;
}
