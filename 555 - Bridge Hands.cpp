#include<bits/stdc++.h>

using namespace std;

int main()
{

    string card[55];

    map<string,int>mp;

    mp["C2"]=1;
    mp["C3"]=2;
    mp["C4"]=3;
    mp["C5"]=4;
    mp["C6"]=5;
    mp["C7"]=6;
    mp["C8"]=7;
    mp["C9"]=8;
    mp["CT"]=9;
    mp["CJ"]=10;
    mp["CQ"]=11;
    mp["CK"]=12;
    mp["CA"]=13;
    mp["D2"]=14;
    mp["D3"]=15;
    mp["D4"]=16;
    mp["D5"]=17;
    mp["D6"]=18;
    mp["D7"]=19;
    mp["D8"]=20;
    mp["D9"]=21;
    mp["DT"]=22;
    mp["DJ"]=23;
    mp["DQ"]=24;
    mp["DK"]=25;
    mp["DA"]=26;
    mp["S2"]=27;
    mp["S3"]=28;
    mp["S4"]=29;
    mp["S5"]=30;
    mp["S6"]=31;
    mp["S7"]=32;
    mp["S8"]=33;
    mp["S9"]=34;
    mp["ST"]=35;
    mp["SJ"]=36;
    mp["SQ"]=37;
    mp["SK"]=38;
    mp["SA"]=39;
    mp["H2"]=40;
    mp["H3"]=41;
    mp["H4"]=42;
    mp["H5"]=43;
    mp["H6"]=44;
    mp["H7"]=45;
    mp["H8"]=46;
    mp["H9"]=47;
    mp["HT"]=48;
    mp["HJ"]=49;
    mp["HQ"]=50;
    mp["HK"]=51;
    mp["HA"]=52;


    char dir;



    while(cin>>dir)
    {
        int t;

        if(dir=='#')break;



        if(dir=='N')
            t=1;
        else if(dir=='E')
            t=2;
        else if(dir=='S')
            t=3;
        else
            t=4;

        string c1,c2;

        cin>>c1>>c2;

        vector<string> p1,p2,p3,p4;


        for(int i=0; i<52; i=i+2)
        {

            string x="";
            if(t==1)
            {
                t++;
                x+=c1[i];
                x+=c1[i+1];
                p1.push_back(x);

            }
            else if(t==2)
            {
                x+=c1[i];
                x+=c1[i+1];
                t++;
                p2.push_back(x);

            }
            else if(t==3)
            {
                x+=c1[i];
                x+=c1[i+1];
                p3.push_back(x);
                t++;
            }
            else
            {
                x+=c1[i];
                x+=c1[i+1];
                p4.push_back(x);
                t=1;
            }
        }

        for(int i=0; i<52; i=i+2)
        {
            string x="";
            if(t==1)
            {
                t++;
                x+=c2[i];
                x+=c2[i+1];
                p1.push_back(x);
            }
            else if(t==2)
            {
                x+=c2[i];
                x+=c2[i+1];
                t++;
                p2.push_back(x);
            }
            else if(t==3)
            {
                x+=c2[i];
                x+=c2[i+1];
                t++;
                p3.push_back(x);
            }
            else
            {
                x+=c2[i];
                x+=c2[i+1];
                t=1;
                p4.push_back(x);
            }
        }

        for(int i=0; i<13; i++)
        {
            for(int j=0;  j<12; j++)
            {
                if(mp[p1[j]]>mp[p1[j+1]])
                {
                    string temp;
                    temp=p1[j+1];
                    p1[j+1]=p1[j];
                    p1[j]=temp;
                }
            }
        }

        for(int i=0; i<13; i++)
        {
            for(int j=0;  j<12; j++)
            {
                if(mp[p2[j]]>mp[p2[j+1]])
                {
                    string temp;
                    temp=p2[j+1];
                    p2[j+1]=p2[j];
                    p2[j]=temp;
                }
            }
        }
        for(int i=0; i<13; i++)
        {
            for(int j=0;  j<12; j++)
            {
                if(mp[p3[j]]>mp[p3[j+1]])
                {
                    string temp;
                    temp=p3[j+1];
                    p3[j+1]=p3[j];
                    p3[j]=temp;
                }
            }
        }
        for(int i=0; i<13; i++)
        {
            for(int j=0;  j<12; j++)
            {
                if(mp[p3[j]]>mp[p3[j+1]])
                {
                    string temp;
                    temp=p3[j+1];
                    p3[j+1]=p3[j];
                    p3[j]=temp;
                }
            }
        }
        for(int i=0; i<13; i++)
        {
            for(int j=0;  j<12; j++)
            {
                if(mp[p4[j]]>mp[p4[j+1]])
                {
                    string temp;
                    temp=p4[j+1];
                    p4[j+1]=p4[j];
                    p4[j]=temp;
                }
            }
        }




        printf("S: ");


        for(int i=0; i<=12; i++)
        {
            if(i!=0)printf(" ");

            cout<<p2[i];
        }
        printf("\n");


        printf("W: ");


        for(int i=0; i<=12; i++)
        {
            if(i!=0)printf(" ");

            cout<<p3[i];
        }
        printf("\n");

        printf("N: ");


        for(int i=0; i<=12; i++)
        {
            if(i!=0)printf(" ");

            cout<<p4[i];
        }

        printf("\n");
        printf("E: ");


        for(int i=0; i<=12; i++)
        {
            if(i!=0)printf(" ");

            cout<<p1[i];
        }
        printf("\n");



    }


    return 0;
}
