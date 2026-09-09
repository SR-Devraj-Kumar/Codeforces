#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
       str[strcspn(str, "\n")] = '\0';
    //puts(str);
    int count=0;
    int len=sizeof(str);
    for(int i=0;i<len-1;i++)
    {
        if(str[i]==str[i+1]){
        count++;
        if(count==6)
        {
            printf("YES");
            break;
        }
        }
    else 
    count=0;
    }
    if(count<6)
    printf("NO");
return 0;
}