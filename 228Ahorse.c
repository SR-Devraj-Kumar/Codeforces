#include<stdio.h>
int main()
{
    int arr[4],same=1;
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
int count =0,n=3;
for(int i=0;i<4;i++)
{
    for(int j=i+1;j<4;j++)
    {
        if(arr[i]==arr[j]){
        count++;
        break;
        }
    
    }
    
   }
printf("%d",count);
return 0;

}