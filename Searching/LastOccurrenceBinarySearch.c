/*
* Returns the index of the last occurence of an element in a sorted array. Modified Binary Search
* Author: Alok Sharma
*/

#include<stdio.h>

int BinarySearchLastOccurence(int A[], int n, int key)
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
    printf("Enter the size of the array: \n");
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
    printf("\nEnter the element of which you want to find the index of last occurrence\n");
    scanf("%d",&key);
    int index = BinarySearchLastOccurence(A, n, key);
    if(index == -1)
    {
        printf("The element %d is NOT found in the array \n",key);
    }
    else{
        printf("The first occurrence of the element %d is found at %d\n",key,index);
    }
    return 0;
}
