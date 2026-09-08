#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m=arr[0]-arr[n-1];
    int a=1,b=n;
     int min=abs(m);
    for(int i=0;i<n-1;i++ )
    {
        int mi=arr[i]-arr[i+1];
        int mina=abs(mi);
        if(mina<min){
            int temp=min;
            min=mina;
            a=i+1;
            b=i+2;


        }
    }
    printf("%d %d\n",a,b);
    return 0;
}