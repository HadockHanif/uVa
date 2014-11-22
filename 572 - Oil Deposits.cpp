#include<bits/stdc++.h>

using namespace std;

bool detection[110][110];

char ch[105][105];

int kount;


void flood_fill(int i,int j)
{
        if(ch[i][j]=='@')
        {

            ch[i][j]='*';

            flood_fill(i-1,j-1);
            flood_fill(i-1,j);
            flood_fill(i-1,j+1);
            flood_fill(i,j-1);
            flood_fill(i,j+1);
            flood_fill(i+1,j-1);
            flood_fill(i+1,j);
            flood_fill(i+1,j+1);
        }


}

int main()
{
    int row,coloumn;

    while(scanf("%d %d",&row,&coloumn)==2)
    {

        if(row==0 && coloumn==0)break;

        kount=0;
        char c;

        memset(ch,'0',sizeof(ch));

        memset(detection,0,sizeof(detection));

        getchar();

        for(int i=1; i<= row; i++)
        {
            for(int j=1; j<= coloumn; j++)
            {
                            scanf("%c",&ch[i][j]);
            }

            getchar();
        }


        for(int i=1; i<= row; i++)
        {
            for(int j=1; j<=coloumn; j++)
            {
                if(ch[i][j]=='@')
                {
                    kount++;

                    flood_fill(i,j);
                }
            }
        }

        cout<<kount<<endl;

    }

    return 0;
}
