//1.You are given an array of integers, nums, and an integer target. Your task is to return an array of two numbers, such that they add up to the target. Write a function to solve this problem efficiently.For example, given nums = [2, 7, 11, 15] and target = 9, the function should return [2, 7] because 2 + 7 = 9.
#include<stdio.h>
int main()
{
    int i,j,target,n=0;
    int num[n];
printf("enter the number of elements in array:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&num[i]);
}
printf("enter the target:");
scanf("%d",&target);
int found=0;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(num[i]+num[j]==target)
            {
            found=1;
            printf("output:[%d,%d]\n",num[i],num[j]);
        }
    }
    if(found)
    break;
    else
    printf("pair not found");
}
return 0;
}
