#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
   char a[25];
   scanf("%s",a);
   int count=0;
    //printf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
    if(a[i]=='4' || a[i]=='7')
    count++;
    }
if(count==4 || count==7 ||
    count==44 || count==47
   || count==74 || count== 77)
printf("YES");
else
printf("NO");

return 0;

}