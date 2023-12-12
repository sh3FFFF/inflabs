#include <stdio.h>

int main()
{
    int array[100];
    int maximum, size, index = 0;

    printf("Введите длину массива (не больше 100)\n");
    scanf("%d", &size);

    printf("Введите %d целых чисел массива\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);
    
    maximum = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
            index = i;
        }
    }

    printf("Максимум находится в позиции %d и его значение %d.\n", index, maximum);
    return 0;
}