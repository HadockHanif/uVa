#include<bits/stdc++.h>

using namespace std;

int m;

bool compare(int a,int b)
{
        if(a%m!=b%m)
          return a%m<b%m;
        else
        {
            if( abs(a)%2 == 0 && abs(b)%2 == 0 )
            {
                return a<b;
            }
            else if( abs(a)%2!=0 && abs(b)%2 != 0 )
            {
                return a>b;
            }
            else if(abs(a)%2 != 0)
             return true;
            else
              return false;
        }


}




int main()
{

        int n,d;

        while(scanf("%d %d",&n,&m))
        {

            vector<int>v;
            cout<<n<<" "<<m<<endl;

            if(n==0 && m==0)break;

            for(int i=1;i<=n;i++)
            {
                cin>>d;
                v.push_back(d);

            }
            sort(v.begin(),v.end(),compare);

            for(int i=0;i<v.size();i++)
              cout<<v[i]<<endl;
        }


    return 0;
}
