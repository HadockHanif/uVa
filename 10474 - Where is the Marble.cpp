#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdlib.h>

using namespace std;

bool c[10006];

int main()
{

    int N,Q,mar,pos,cas=1;
    int marble[10001];

    while(scanf("%d %d",&N,&Q)==2)
    {

        pos=1;
        if(N==0&&Q==0)
         break;

        for(int i=1;i<=N;i++)
        {

            scanf("%d",&mar);



                   marble[pos++]=mar;



        }


        sort(marble+1,marble+pos);


        printf("CASE# %d:\n",cas++);


        for(int i=1;i<=Q;i++)
        {
            scanf("%d",&mar);

            int l=1,k=pos-1,mid=0;
            int d=0;
            while(l<=k)
            {

                mid=(l+k)/2;

                if(marble[mid]==mar)
                  {
                      while(marble[mid] == marble[mid-1])
                      mid--;

                      printf("%d found at %d\n",mar,mid);
                      d=1;

                      break;
                  }
                  else if(marble[mid]<mar)
                  {

                       l=mid+1;

                  }
                  else if(marble[mid]>mar)
                  {

                        k=mid-1;

                  }
            }
           if(d==0)
           {
               printf("%d not found\n",mar);

           }

        }
    }

    return 0;
}
