#include<stdio.h>
#include<string.h>


int main()
{
    char Ch[90000];

    long L,sp,spp,i,j;
    char c;

    while(gets(Ch))
    {
        //memset(Ch,0,sizeof(Ch));

        L=strlen(Ch);
        sp=0;

        for( i=0;i<L;i++)
        {

           if(Ch[i]==' ')
           {
               if(Ch[sp]=='A'||Ch[sp]=='a'||Ch[sp]=='E'||Ch[sp]=='e'||Ch[sp]=='I'||Ch[sp]=='i'||Ch[sp]=='O'||Ch[sp]=='o'||Ch[sp]=='U'||Ch[sp]=='u')
                {
                     for( j=sp;j<i;j++)
                        printf("%c",Ch[j]);


                }
                else
                {

                     for( j=sp+1;j<i;j++)
                        printf("%c",Ch[j]);
                     printf("%c",Ch[sp]);
                }

                printf("ay ");
                sp=i+1;

           }

        }
         for( i=sp;i<L;i++)
         {

            if(Ch[sp]=='A'||Ch[sp]=='a'||Ch[sp]=='E'||Ch[sp]=='e'||Ch[sp]=='I'||Ch[sp]=='i'||Ch[sp]=='O'||Ch[sp]=='o'||Ch[sp]=='U'||Ch[sp]=='u')
                 {
                     for(j=sp;j<L;j++)
                     {
                         if((Ch[j]>='A'&&Ch[j]<='Z')||(Ch[j]>='a'&&Ch[j]<='z'))
                            {
                                printf("%c",Ch[j]);


                            }
                        else
                           c=Ch[j];

                     }
                     printf("ay%c",c);
                     break;

                    }
                else
                  {
                      for(j=sp+1;j<L;j++)
                      {
                      if((Ch[j]>='A'&&Ch[j]<='Z')||(Ch[j]>='a'&&Ch[j]<='z'))
                         {

                               printf("%c",Ch[j]);
                         }
                        else
                          c=Ch[j];
                      }
                      printf("%cay%c",Ch[sp],c);

                        break;
                  }

         }

   printf("\n");
    }

return 0;
}
