#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stack>

using namespace std;

char ex[60],ex1[60],exp[60],inp[3];

int main()
{


    char C;
    stack <char> s;

    int t,len;

    scanf("%d\n",&t);


    for(int k=1;k<=t;k++)
    {
           int count=1,pos=1,m=1;

           while(gets(inp)&&strlen(inp))
                ex1[m++]=inp[0];
           ex1[0]='(';
           ex1[m]=')';
           ex1[m+1]='\0';


           //len=strlen(ex);


           s.push(ex1[0]);

          //cout<<s.top()<<endl;
           while(!s.empty())
           {
                  C=ex1[count++];
                  if(C=='(')
                      {
                          s.push(C);
                      }
                  else if((C=='/')||(C=='*'))
                      {
                        s.push(C);
                       }

                  else if(C=='+'||C=='-')
                  {
                      while(s.top()=='/'||s.top()=='*')
                      {
                          exp[pos++]=s.top();
                          s.pop();
                      }
                      s.push(C);
                 }
                  else if(C==')')
                   {

                       //cout<<"af"<<endl;
                       while(s.top() != '(')
                             {
                                 exp[pos++]=s.top();
                                 s.pop();
                             }
                             s.pop();
                    }
                   else
                     {
                         exp[pos++]=C;
                     }

            }
     for(int x=1;x<pos;x++)
          printf("%c",exp[x]);

    printf("\n");
    }
return 0;
}
