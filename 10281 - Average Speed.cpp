#include<bits/stdc++.h>

using namespace std;

int main()
{

    char ch[505];
    int p_m=0,p_h=0,p_s=0,p_sp=0,speed;
    double result=0;
    while(gets(ch))
    {
        int h,m,s;
        int len=strlen(ch);
        if(len==8)
        {

            sscanf(ch,"%d:%d:%d",&h,&m,&s);
            result+=(((3600*h)+(60*m)+s)-((3600*p_h)+(60*p_m)+p_s))*((double)p_sp/3600.0);
            p_h=h;
            p_m=m;
            p_s=s;
            printf("%02d:%02d:%02d %.2lf km\n",h,m,s,result);

        }
        else
        {
            sscanf(ch,"%d:%d:%d %d",&h,&m,&s,&speed);
            result+=(((3600*h)+(m*60)+s)-((3600*p_h)+(p_m*60)+p_s))*(p_sp/3600.0);
            cout<<result<<endl;
            p_h=h;
            p_sp=speed;
            p_m=m;
            p_s=s;
        }
    }


    return 0;
}
