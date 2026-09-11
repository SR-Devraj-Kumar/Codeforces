#include<stdio.h>
int isprime(int num,int i);
int main()
{
    int n;
    scanf("%d",&n);
    int arr,d;
   while(n>0)
    {
        scanf("%d",&arr);
        d=isprime(arr+1,2);
    n--;
    
        if(d==1)
        printf("yes\n");
    else
    printf("no\n");
    }
    return 0;
} 

int isprime(int num,int i)
    {
        if(num<2) return 0;
        if(i*i>num) return 1;

        if(num%i==0) return 0;
        return isprime(num,i+1);
       
    }

    
