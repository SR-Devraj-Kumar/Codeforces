#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],ar[n],k=0,count=1;
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
for(int i=0;i<n;i++){
     count =1;
    for(int j=0;j<k;j++){
       
        if(arr[i]==ar[j]){
        count =0;
            break;
           }
       }
        if(count==1)
       {
            ar[k]=arr[i];
            k++;

        }
    
    }
    //for(int i=0;i<k;i++)
    //printf("%d",ar[i]);
for(int i=0;i<k-1;i++){
    for(int j=i+1;j<k;j++){
        if(ar[i]>ar[j]){
            int temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        }
    }
}
if(k>1)
printf("%d\n",ar[1]);
else
printf("NO\n");
return 0;
    


}