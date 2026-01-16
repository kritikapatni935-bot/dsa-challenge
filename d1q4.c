
// Swap two numbers (with temp)
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is the greatest",a);

    }
    else if(b>a && b>c)
    {
        printf("%d is greatest",b);
    }
    else
    {

    printf("c =%d is greatest",c);

    }
    return 0;
}
