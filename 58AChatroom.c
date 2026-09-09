#include<stdio.h>
#include<string.h>
int main(){
    char terget[6]="hello";
    char str[102];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int len =strlen(str);
    int count=0,p=0;
        for(int i=0;i<5;i++){
            for(int j=count;j<len;j++)
            {
                
                if(terget[i]==str[j]){
                    p++;
                    count=j+1;
                    break;
                }
            }
        }
    if(p==5)
    printf("YES");
else
printf("NO");
return 0;

}