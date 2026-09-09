#include<stdio.h>
int main()
{
    long long int n,sum=0,count=0;
    scanf("%lld",&n);
    long long int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%lld",&arr[i][j]);
        }
    }
    for(int j=0;j<3;j++)
    {
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i][j];
        }
         if(sum==0)
         count++;
        else
         break;
    }
    if(sum==0)
    printf("YES");
    else
    printf("NO");
return 0;

}