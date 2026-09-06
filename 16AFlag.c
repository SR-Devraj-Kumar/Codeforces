#include<stdio.h>
#include<string.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    char arr[n][m];
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf(" %c",&arr[i][j]);
          }
    }
          for(int i=0;i<n;i++){
            for(int j=0;j<m-1;j++){
                  if(arr[i][j]!=arr[i][j+1]){
            count =0;
             break;
            }

            }
          }
           for(int i=0;i<n-1;i++){
            if(arr[i][0]==arr[i+1][0]){
            count=0;
        break;
    }
}
          if(count==0)
          printf("NO\n");
        else
        printf("Yes\n");
    return 0;
    
}