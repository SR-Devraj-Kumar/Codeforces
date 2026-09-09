#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int upper=0,lower=0;
    char arr[101];
  scanf("%s",arr);
    int len=strlen(arr);
    //printf("%d",len);
    for(int j=0;j<len;j++)
    {
          if(isupper(arr[j]))
        upper++;
    else
    lower++;

    }
    //printf("u=%d l=%d",upper, len-upper);

    
    if(lower>=upper)
    {
    for(int i=0;i<len;i++)
    {
    arr[i]=tolower(arr[i]);
    }
   }
   else
    {
    for(int i=0;i<len;i++)
    {
    arr[i]=toupper(arr[i]);
    }
   }

    puts(arr); 
return 0;

}