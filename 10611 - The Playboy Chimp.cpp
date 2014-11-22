#include<bits/stdc++.h>

using namespace std;

int main()
{

    long n,q;

    scanf("%ld",&n);


        long ar[50005],temp;

        memset(ar,0,sizeof(ar));
        int id=1;
        for(long i=1; i<=n; i++)
        {
            scanf("%ld",&temp);

            if(temp!=ar[id-1])
            {
                ar[id++]=temp;
            }
        }



        long hi,lo,mid;



        scanf("%ld",&q);

        long Obj[25005];

        for(long i=1; i<=q; i++)
            scanf("%ld",&Obj[i]);

        for(long i=1; i<=q; i++)
        {

            if(Obj[i]>ar[id-1])
            {
                printf("%ld X\n",ar[id-1]);
                continue;
            }
            else if(Obj[i]<ar[1])
            {
                printf("X %ld\n",ar[1]);
                continue;
            }
            if(Obj[i]==ar[1])
            {
                printf("X %ld\n",ar[2]);
                continue;
            }
            else if(Obj[i]==ar[id-1])
            {

                printf("%ld X\n",ar[id-2]);
                continue;
            }




            hi=id-1;
            lo=1;

            int dci;
            while(lo<=hi)
            {
                mid=(hi+lo)/2;

                if(ar[mid]==Obj[i])
                {

                    dci=1;
                    break;
                }
                else if(Obj[i]<ar[mid])
                {
                    hi=mid-1;
                    dci=3;
                }
                else
                {
                    lo=mid+1;

                    dci=2;
                }
            }
            if(dci==1)
                cout<<ar[mid-1]<<" "<<ar[mid+1]<<endl;
            else if(dci==2)
            {
                cout<<ar[mid]<<" "<<ar[mid+1]<<endl;
            }
            else
            {
                cout<<ar[mid-1]<<" "<<ar[mid]<<endl;
            }


        }




    return 0;
}
