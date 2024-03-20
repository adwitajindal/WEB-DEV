// arrange the array in ascending order//

#include <stdio.h>
int main()
{
    int i, j, total_values;
    printf("Total values in array: ");
    scanf("%d", &total_values);
    int a[total_values];
    for (i = 0; i < total_values; i++)
    {
        printf("value %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < total_values ; i++)
    {
        for (j = (i + 1); j < total_values; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        printf("%d\t", a[i]);
    }

    return 0;
}