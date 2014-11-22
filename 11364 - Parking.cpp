#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;


int arr[1000];

int main()
{

    int T,N;

    cin>>T;

    while(T--)
    {


        cin>>N;

        for(int i=0;i<N;i++) cin>>arr[i];

        sort(arr,arr+N);


       printf("%d\n",2*(arr[N-1]-arr[0]));
    }


    return 0;

}
