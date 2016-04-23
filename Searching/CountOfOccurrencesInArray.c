/*
* Uses modified Binary Search to find first and last occurrences of an element in a sorted array.
* By subtracting first occurrence index from last, we get count of occurrence for an eleemnt in the array
*Author: Alok Sharma
*/

#include<stdio.h>
#include<stdbool.h> //to use boolean data type in C99. (https://stackoverflow.com/questions/8133074/error-unknown-type-name-bool)

int BinarySearchFirstOccurence(int A[], int n, int key, bool FirstOccurence)
{
    int low =0;
    int high =n-1;
    int result = -1;
    int mid;
    while(low<=high)
    {
         mid= low + (high -low)/2;
        if(key == A[mid])
        {
            result = mid;
            if(FirstOccurence) //If first occurence is true
                high = mid-1;
            else
                low = mid+1;
        }
        else if(key < A[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return result;
}

int main(void)
{
    int i, n, key;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int A[n];
    printf("Please enter the elements in the array in the sorted order \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
     printf("The array you entered is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nEnter the element of which you want to count the number of occurrences\n");
    scanf("%d",&key);
    int first, last;
    first = BinarySearchFirstOccurence(A, n, key, true);
    if(first == -1)
    {
        printf("The element %d is NOT found in the array \n",key);
        printf("The count is zero!\n");
    }
    else
    {
        last = BinarySearchFirstOccurence(A, n, key, false);
        printf("The element %d occurs %d times in the array \n",key, last-first +1);

    }
    return 0;
}
