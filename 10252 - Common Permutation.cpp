#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s1,s2;
    char ch[2000];

    int t;



    while(    cin>>s1>>s2)
    {

        int pos=0;



        for(int k=0; k<s1.length(); k++)
        {
            for(int l=0; l<s2.length(); l++)
            {
                if(s1[k]==s2[l])
                  ch[pos++]=s1[k];
            }
        }
        sort(ch,ch+pos);

        for(int j=0; j<pos; j++)
        {
            if(j==0)
                cout<<ch[j];
            else
            {
                if(ch[j]==ch[j-1])
                    continue;
                cout<<ch[j];
            }
        }

        cout<<endl;

        memset(ch,'0',sizeof(ch));
    }


    return 0;
}
