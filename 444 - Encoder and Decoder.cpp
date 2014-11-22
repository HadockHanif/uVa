#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>


int main()
{
    char Ch[100];
    int L,i,j,sum,x;



    while(gets(Ch))
    {
        L=strlen(Ch);
        i=L-1;
        if(isdigit(Ch[0]))
        {
            while(i>=0)
            {

                if(Ch[i]=='1')
                {
                    sum=0;
                    sum=((Ch[i]-48)*100)+((Ch[i-1]-48)*10)+(Ch[i-2]-48);
                    i=i-3;
                    printf("%c",sum);
                }
                else
                {
                    sum=((Ch[i]-48)*10)+(Ch[i-1]-48);
                    printf("%c",sum);
                    i=i-2;
                }
            }


        }
        else
        {
            for(j=L-1;j>=0;j--)
           {
               x=Ch[j];
                 while(x>0)
                 {
                     printf("%d",x%10);
                     x=x/10;
                 }

           }



        }
    printf("\n");
    }
    return 0;

}
