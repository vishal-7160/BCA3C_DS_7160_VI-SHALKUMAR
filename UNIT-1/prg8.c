/*8.Sort the array into ascending order.
NAME:-VISHAL KUMAR
ENROLL:-92500527160*/

#include<stdio.h>
void main()
{
    int a[5],i,n,j,temp;

    printf("\n enter the limit :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      printf("\n enter the value %d : ",i+1);
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n sorted elements\n");
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
}
