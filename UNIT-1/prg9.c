/*9. Sort the array into descending order.
NAME:-VISHAL KUMAR
ENROLL:-92500527160*/

#include <stdio.h>

int main()
{
    int a[5], i, n, j, temp;

    printf(" Enter the limit : ");
    scanf("%d", &n);

    if(n > 5 || n <= 0)
    {
        printf("Invalid limit!");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        printf(" Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Sorting in descending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n Sorted elements in descending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("\n %d ", a[i]);
    }

}
