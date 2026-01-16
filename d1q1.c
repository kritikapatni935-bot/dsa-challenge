//Print sum, average of N numbers
#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum,avg;
   printf("enter 5 numbers");
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
avg=sum/5;
printf("sum =%d and averge =%d\",sum,avg);
return 0;
}
