#include<stdio.h>
#include<set>
#include<algorithm>
#include<string.h>

using namespace std;

char Ch[1005];
int A[1005];
int C[1005];
int main()
{

     set<int>s;

    int i,j,l,L,c,in,sum=0;;
    set<int>::iterator k;

    while(gets(Ch))
    {

         if(sum>0)
            printf("\n");
         memset(C,0,sizeof(C));

        L=strlen(Ch);



        for(j=0;j<=130;j++)
        {
            c=0;
          for(i=0;i<L;i++)
          {


              if(j==(int)Ch[i])
                {c++;

                }
             }
          C[j]=c;
          //printf("%d",C[j]);
          }
        //s.clear();

         for(i=1;i<1001;i++)
         {
            for(j=130;j>=0;j--)
                {
                        if(C[j]==i)
                           printf("%d %d\n",j,i);
                }

        }


    sum++;
    }
return 0;
}
