#include <stdio.h>

int main()
{
    int a[8],i,j;
    int dupicate =0;
    printf("Enter the 8 elements of the array :");
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i < 8;i++)
    {
        for(j=i+1;j < 8;j++)
        {
            if(a[i] == a[j])
            {
                 printf("%d ", a[i]);
                dupicate=1;
                break;
            }
        }
    }
    printf("is  dupicate elements  %",a[i]);

    return 0;
}