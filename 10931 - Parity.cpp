#include<stdio.h>
#include<string.h>
int main()
{


    long I,L;
    int one,pos;

    int Ch[100];



    while(scanf("%ld",&I)==1)
    {
        memset(Ch,0,sizeof(Ch));
        pos=one=0;
        L=I;

        if(I==0)
          break;

        while(I>0)
        {
            Ch[pos++]=I%2;
            if(I%2==1)
              one++;

            I=I/2;
        // printf("%s",Ch);
        }
     printf("The parity of ");
     for(int j=pos-1;j>=0;j--)
       printf("%d",Ch[j]);

    printf(" is %d (mod 2).\n",one);
    }

    return 0;
}
