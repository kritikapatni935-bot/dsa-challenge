//Check whether a number is prime
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter the number");
    scanf("%d",&num);
    if(num<=1)
    {
        printf("invailad case");
}
for(int i=1;i<num;i++)
{
    if(num%i==0)
    {
count++;
    }

}
if(count==2)
printf("prime num");
else
printf("not prime nummber");
 return 0;
}
