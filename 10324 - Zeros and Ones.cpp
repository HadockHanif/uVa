#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{

    char s[100000];
    int kase=1;

    char c;
    while((c=getchar() )!=EOF && c!='\n')
    {

        int i=0;
        s[i++]=c;

        while((c=getchar())!='\n')
        {
            s[i++]=c;
        }
        printf("Case %d:\n",kase++);
        int t;
        cin>>t;

        for(int x=1; x<=t; x++)
        {



            int k,l,mini,maxi;
            cin>>k>>l;
            mini=min(k,l);
            maxi=max(k,l);


            int c1=0,c0=0;

            for(int j=mini; j<=maxi; j++)
            {
                if(s[j]=='1')c1++;
                else if(s[j]=='0')c0++;
            }

            if(c1!=0)
            {
                    if(c0==0)
                    cout<<"Yes"<<endl;
                    else
                    cout<<"No"<<endl;
            }
            else if(c0!=0)
            {
                if(c1==0)
                cout<<"Yes"<<endl;
                else
                cout<<"No"<<endl;
            }
        }


    c=getchar();
    }


    return 0;
}
