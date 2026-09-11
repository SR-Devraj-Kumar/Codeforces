#include<stdio.h>
int my_tram(int n){
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max,x,a;
     a=arr[0][1];
     max=a;
    for(int i=1;i<n;i++)
    {
        x=a-arr[i][0]+arr[i][1];
        a=x;
        if(x>max){
            max=x;
        }
    }
    return max;

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",my_tram(n));
    return 0;

}