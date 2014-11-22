#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;

int main()
{
    char Ch[10000];
    int T,len;

    while(scanf("%d",&T)==1)
    {

       getchar();
    for(int i=1;i<=T;i++)
    {

        scanf("%s",&Ch);
        len=strlen(Ch);
        int i=atoi(Ch);

        if(i==1||i==4||i==78)
          {
              printf("+\n");

          }

          else if(Ch[len-1]=='5'&&Ch[len-2]=='3')
            {
                printf("-\n");
            }
            else if(Ch[0]=='9'&&Ch[len-1]=='4')
            printf("*\n");
            else
            printf("?\n");



    }

    }

 return 0;
}
