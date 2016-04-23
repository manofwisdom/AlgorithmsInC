/* Given an array, check whether there are duplicate elements or not.
*This is a Brute Force implementation with cpomplexity of O(n2)
* Author: Alok Sharma
*/

#include<stdio.h>

int main(void)
{

    int i,j,n, duplicate =-1;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);

    int A[n];
    printf("Enter the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The array you entered is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++) //For ith element, compare elements from i+1 utp n-1
        {
            if(A[i] == A[j])
            {
                duplicate = A[i];
                break;
            }
        }
    }
    if(duplicate != -1)
        printf("\nThe duplicate element is %d \n",duplicate);
    else
        printf("\nDuplicates don't exist in the array.\n");
    return 0;


}
