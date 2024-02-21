
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int size;
    double average = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
        average += array[i];
    }

    average = average / size;

    printf("The average of the elements in the array is: %.2f\n", average);
    free(array);

    return 0;
}