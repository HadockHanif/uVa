#include<bits/stdc++.h>

using namespace std;
bool primes[20000005];

void prime()
{


    for(int i=4; i<=20000000; i+=2)
    {
        primes[i]=1;
    }
    for(int i=3; i<=sqrt(20000000); i+=2)
    {
        if(primes[i]==0)
        {
            for(int j=i*2; j<=20000000; j=i+j)
                primes[j]=1;


        }
    }
}


int main()
{

    prime();

    vector<long>v;
    vector<int >v1;
    int count=11;

    int arr[100]= {2,3,5,7,11,13,17,19,23,29,31};
//    cout<<arr[10];

    for(int i=14; i<=50000; i++)
    {
        v1.clear();
        int d=0;


        for(int j=0; j<11; j++)
        {
            if(i%arr[j]==0)
            {
                v1.push_back(arr[j]);
                //cout<<arr[j]<<endl;
            }
        }
        //cout<<v1.size();
        for(int k=0; k<v1.size(); k++)
        {
            if((v1[k]!=2)&&(v1[k]!=3)&&(v1[k]!=5))
                d++;
        }
        if(d==0)
        {
            if(primes[i]!=0)
            {
                v.push_back(i);
                ++count;
                if(count==1500)
                   cout<<i;
            }
        }
    }

    return 0;
}
