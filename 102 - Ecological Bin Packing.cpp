#include<bits/stdc++.h>

using namespace std;

int main()
{

    long n[12];

    while(scanf("%ld",&n[1])!=EOF)
    {

        for(int i=2; i<=9;i++)scanf("%ld",&n[i]);

        long mov,temp;


        int state=1;

        mov=n[4]+n[7]+n[3]+n[9]+n[2]+n[5];

        temp=n[4]+n[7]+n[2]+n[8]+n[3]+n[6];

        if(mov > temp)
        {
            state=2;
            mov=temp;
        }


        temp=n[6]+n[9]+n[1]+n[7]+n[2]+n[5];

        if(temp < mov)
        {
            state=3;
            mov=temp;
        }

        temp=n[6]+n[9]+n[2]+n[8]+n[1]+n[4];

        if(temp < mov)
        {
            state=4;
            mov=temp;
        }
           //brown index 1,4,7
           //green index 2,5,8
           //clear index 3,6,9
        temp = n[5]+n[8]+n[1]+n[7]+n[3]+n[6];

        if(temp < mov)
        {
            state=5;
            mov = temp;
        }

        temp= n[5]+n[8]+n[3]+n[9]+n[1]+n[4];

        if(temp<mov)
        {
            state=6;
            mov=temp;
        }


        if(state==1)
        printf("BCG %ld\n",mov);
        else if(state == 2)
        printf("BGC %ld\n",mov);
        else if(state == 3)
        printf("CBG %ld\n",mov);
        else if(state == 4)
        printf("CGB %ld\n",mov);
        else if(state == 5)
        printf("GBC %ld\n",mov);
        else if(state == 6)
        printf("GCB %ld\n",mov);
    }

    return 0;
}
