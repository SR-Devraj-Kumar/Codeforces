#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
        int sum=0;
        for(int i=0;i<m;i++){
            if(arr[i]<0)
            sum+=(-1)*arr[i];
        }

    printf("%d\n",sum);
    return 0;

}