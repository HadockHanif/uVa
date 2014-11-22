#include<bits/stdc++.h>

#define con 0.0174532925
#define er 6440

using namespace std;

int main()
{

    long a,s;
    string c;

    while(cin>>s>>a>>c)
    {

        double solutn=0;
            if(c=="deg")
            {
                solutn=con*a*(s+er);
            }
            cout<<solutn<<endl;
    }

    return 0;
}
