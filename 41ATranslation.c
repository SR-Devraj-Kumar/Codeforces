
#include<stdio.h>
#include<string.h>
int main()
{
    char ar[101],arr[102];
    scanf("%s%s",ar,arr);
    //puts(ar);
    //puts(arr);

    int d=strcmp(strrev(ar),arr);
    if(d==0)
    printf("YES");
else
printf("NO");
    return 0;
}
