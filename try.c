#include <stdio.h>
int main()
{
    int a[5], i, j, n, sum;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the sum:");
    scanf("%d",&sum);
   
     for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
            {
                printf("(%d, %d)\n", a[i], a[j]);
                
            }
        }
    }
    

}
