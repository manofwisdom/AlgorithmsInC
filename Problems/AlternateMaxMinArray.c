#include<stdio.h>
//Suppose the input is already sorted.


int main(void)
{
    int n, i, j;
    printf("Enter the number of elements in the array \n ");
    scanf("%d",&n);
    int A[n], B[n];
    printf("Enter the %d integers in the array in the sorted order \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The entered elements are \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n\n");
    int small =0, large =n-1;
    for(j=0; j<n; j+=2)
    {x
        B[j] = A[large];
        B[j+1] = A[small];
        large--;
        small++;
    }
    printf("Alternate max-min sorted elements are: \n");
    for(i=0; i<n;i++)
    {
        printf("%d ",B[i]);
    }

    return 0;
}
