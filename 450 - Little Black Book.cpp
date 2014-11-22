#include<bits/stdc++.h>

using namespace std;


int main()
{


    int t;

    char ch[10000];

    scanf("%d",&t);


    getchar();
    for(int i=1; i<=t; i++)
    {
            gets(ch);

            int len=strlen(ch);

            vector<string>name;

            string dept;

            char title[1000],f_name[1000],l_name[1000],add[1000],h_phone[1000],w_phone[1000],c_mail[1000];

            dept=ch;

            while(len != 0)
            {


                scanf("%s,%s,%s,%s,%s,%s,%s",title,f_name,l_name,add,h_phone,w_phone,c_mail);


                printf("%s \n%s \n%s \n%s \n%s \n%s \n%s\n",title,f_name,l_name,add,h_phone,w_phone,c_mail);

                len=strlen(ch);
            }
    }

    return 0;
}
