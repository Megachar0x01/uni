#include <stdio.h>
int selection_sort(int *array, int n)
{
    --n; 

    if (n < 1)
        return -1;

    for (int i = 0; i < n - 1; ++i) {
        int min = i;


        for (int j = i + 1; j <= n; ++j)
            if (array[j] < array[min])
                min = j;

        if (min != i) {
            int tmp = array[i];
            array[i] = array[min];
            array[min] = tmp;
        }
    }

    return 0;
}

int main(void)
{
    int array[10];
    for (int j=0;j<10;j++){
        printf("\nEnter %d number : ",j+1);
        scanf("%d", &array[j]);
    }
    selection_sort(array, 10);

    for (int i = 0; i < 10; ++i)
        printf("%d ", array[i]);

    return 0;
}
