//2.	You are given an array of integers and an integer k, where k is a non-negative number. Your task is to rotate the array to the right by k steps. For example, if the input array is [1, 2, 3, 4, 5] and k is 3, then the array should be rotated to [3, 4, 5, 1, 2].
#include<stdio.h>
int main()
{
    int n,i,k;
    int arr[n],temp[n];
    printf("enter the number of element in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number of rotation:");
    scanf("%d",&k);
    k=k%n;
int index = 0;
    for (int i = n - k; i < n; i++) {
        temp[index++] = arr[i];
    }


    for (int i = 0; i < n - k; i++) {
        temp[index++] = arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Rotated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


}
