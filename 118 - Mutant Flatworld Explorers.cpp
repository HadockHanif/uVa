#include<bits/stdc++.h>

using namespace std;



int main()
{

    int x,y,a,b,m,n,x1,y1;
    char c,cc;
    int scent[55][55]={0};

    cin>>x>>y;



    while(scanf("%d %d %c",&m,&n,&c)==3)
    {
        int count=0;
       string s;
       cin>>s;
       a=m;
       b=n;

        x1=y1=0;
       int len=s.length();


       for(int i=0;i<len;i++)
       {


            if(c=='E')
            {
                if(s[i]=='F')
                {
                    a=a+1;
                    if(a>x)
                        {
                            x1=x;
                            y1=b;
                            if(scent[x][b]==0)
                            {
                                cc=c;
                                count++;
                                scent[x][b]=1;
                                break;
                            }
                            a=x;b=b;
                        }

                }
                else if(s[i]=='R')
                {
                    c='S';
                }
                else if(s[i]=='L')c='N';
            }
            else if(c=='S')
            {
                if(s[i]=='F')
                {
                    b=b-1;
                    if(b<0)
                      {

                          x1=a;
                          y1=0;
                          if(scent[a][0]==0)
                          {
                              scent[a][0]=1;
                              cc=c;

                              count++;
                              break;
                          }a=a;b=0;
                    }
                }
                else if(s[i]=='R')
                   c='W';
                else if(s[i]=='L')
                    c='E';
            }
            else if(c=='W')
            {
                if(s[i]=='F')
                 {
                     a=a-1;
                     if(a<0)
                       {
                           x1=0;
                           y1=b;
                            if(scent[0][b]==0)
                            {
                                scent[0][b]=1;
                                cc=c;
                                count++;
                                break;
                            }a=0;b=b;
                        }
                 }
                 else if(s[i]=='R')
                      c='N';
                 else if(s[i]=='L')
                     c='S';
            }
            else if(c=='N')
            {
                if(s[i]=='F')
                {
                    b=b+1;
                    if(b>y)
                    {
                        x1=a;
                        y1=y;
                        if(scent[a][y]==0)
                        {
                            scent[a][y]=1;
                            cc=c;
                        count++;

                        break;
                        }a=a;b=y;
                    }
                }
                else if(s[i]=='R')
                   c='E';
                else if(s[i]=='L')
                   c='W';
            }
       }

    if(count==0)
    printf("%d %d %c\n",a,b,c);
    else
    {
        printf("%d %d %c LOST\n",x1,y1,cc);
    }
    }

    return 0;
}
