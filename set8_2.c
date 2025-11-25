#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    arr = (int*) calloc(n, sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Values immediately after calloc (should be all zeros):\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter %d new values to update the array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Updated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
