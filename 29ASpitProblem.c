#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++)
        scanf("%d%d",&a[i],&b[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]+b[i]==a[j] &&
            a[j]+b[j]==a[i]){
            flag=1;
            break;
            }
        }
    }
       
    
    if(flag==1)
    printf("YES\n");
else
printf("NO\n");
return 0;
}