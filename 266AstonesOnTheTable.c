#include<stdio.h>
#include<string.h>
int main()
{
    int  n ,count=0;
    char arr[51];
    scanf("%d ",&n);
    fgets(arr,n+1,stdin);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        count++;
        }
        printf("%d",count);
        return 0;
}