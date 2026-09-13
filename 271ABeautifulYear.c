#include<stdio.h>
int my_function(int year){
    int a,b,c,d,year1;
    d=year%10;
    year1=year/10;
    c=year1%10;
    year1=year1/10;
    b=year1%10;
    a=year1/10;
    if(a!=b && b!=c&& c!=d
        && d!=a &&d!=b && 
        a!=c &&c!=a)
        return year;
        else 
        {
        year++;
            my_function(year);
        }
}
int main()
{
    int n,year;
    scanf("%d",&n);
    year=my_function(n+1);
    printf("%d",year);
    return 0;
     

}