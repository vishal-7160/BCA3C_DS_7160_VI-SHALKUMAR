/*7. Delete an element from the array from user defined position.
NAME:-VISHAL KUMAR
ENROLL:-92500527160*/

#include <stdio.h>

int main()
{
    int a[100], n, pos, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position to be deleted: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n)
    {
        printf("Invalid position!");
        return 0;
    }

    pos = pos - 1;

    for(i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    printf("\nValues of array after deletion are:\n");
    for(i = 0; i < n - 1; i++)
    {
        printf("At position %d value is: %d\n", i + 1, a[i]);
    }

}
