#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdlib.h>
#include<set>

using namespace std;

int main()
{

    set <int> S;
    set <int> :: iterator it;
    int T,let[30],cpylet[30],len,x;
    char Ch[900];



    while(scanf("%d\n",&T)==1)
    {
           memset(let,0,sizeof(let));
           for(int i=1;i<=T;i++)
           {

               gets(Ch);
               len=strlen(Ch);

               for(int j=0;j<len;j++)
               Ch[j]=toupper(Ch[j]);

              for(int j=0;j<len;j++)
              {

                  if(Ch[j]>='A'&&Ch[j]<='Z')
                     {
                       x=Ch[j];
                       let[x-'A']++;
                     }
               }

           }
           for(int j=0;j<26;j++)
           {
               S.insert(let[j]);
           }

           for(it=S.end();it!=S.begin();it--)
           {
               for(int j=0;j<26;j++)
               {
                   if(*it==let[j])
                      printf("%c = %d\n",j+'A',*it);
               }
           }


    }



    return 0;
}
