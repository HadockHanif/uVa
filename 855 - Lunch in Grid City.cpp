#include<bits/stdc++.h>

using namespace std;






int main()
{

    int a,s,f,t;

    cin>>t;

    for(int i=1;i<=t;i++)
    {
        vector<int>A,S;
        int x,y;
        cin>>a>>s>>f;

        for(int j=1;j<=f;j++)
        {
            cin>>x>>y;
            A.push_back(x);
            S.push_back(y);
        }
        sort(A.begin(),A.end());
        sort(S.begin(),S.end());

        if(f%2==0)
        {
            x=f/2;
            printf("(Street: %d, Avenue: %d)\n",A[x-1],S[x-1]);
        }
        else
        {
            x=(f+1)/2;
            printf("(Street: %d, Avenue: %d)\n",A[x-1],S[x-1]);
        }
    }




    return 0;
}
