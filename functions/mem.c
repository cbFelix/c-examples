#include <stdio.h>
#include <stdlib.h>

int main() {
        int *arr;
        int arrSize = 5;

        arr = (int *)malloc(arrSize * sizeof(int));
        if (arr == NULL) {
                printf("Memory allocation error\n");
                return 1;
        }

        for (int i = 0; i < arrSize; ++i) {
                arr[i] = i * 3.141;
                printf("%d ", arr[i]);
        }
        printf("\n");

        free(arr);

        return 0;
}