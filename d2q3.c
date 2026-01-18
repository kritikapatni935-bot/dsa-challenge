//3.Write a program to find the Second Largest Number in an Array
#include <stdio.h>

int main() {
    int n, i;
    int largest, second_largest;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    largest = second_largest = arr[0];


    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    printf("Second Largest Number = %d", second_largest);

    return 0;
}


