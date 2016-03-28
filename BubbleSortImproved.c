/*We don't need to compare all elements of the array of size "size" in each pass.
Because in general after a few iterations, the array/list will be divided in two parts: sorted and unsorted part.
Since the sorted part is already sorted it's futile to compare each element with its next next in sorted part.
So we can run the second loop from i =0 to i =size-j-1 (or i< size-j). This ensures we don't compare in the sorted part of the list.

Also, sometimes the list is already sorted in fewer than size-1 passes, so making another pass is useless because no elements are being swapped.
To avoid going through the loops again and again, we can use a flag variable that's initialized to 0 in each pass(outer loop) and initialized to 1
after each swap in the inner loop.
When the whole list is sorted, in the next pass the flag will be initialized to 0 and no swap will happen when we enter the inner loop.
If no swap happens after going through inner loop, then we break from the loop; the list is already sorted.

The best case is when the list is already sorted, then the time complexity is O(n).
*/

#include<stdio.h>

void getArray(int *array, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d", &array[i]);
    }
}

void printArray(int *array, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}
void BubbleSort(int *array, int size)
{
    int i,j, temp, flag=0;
    for(j=0;j<=size-2;j++) //we'd do n-1 pass in the array of n elements
    {                   //in each pass we'd compare element at index i with element at index i+1 and swap if array[i]>array[i+1]
        flag=0;
        for(i=0;i<=size-2;i++) //or i<n-1(or i=1; i<n, i.e. runs from 0 to n-2 i.e. n-1 times, this is because at i =n-1, that'd be the last index and we won't be able to access array[i+1]
        {
            if(array[i]>array[i+1]) //if element at lower index is larger than the element at higher index
            {                       //then swap both elements
                temp =array[i];
                array[i] =array[i+1];
                array[i+1] =temp;
                flag =1;
            }
        }
        if(flag==0) //Even if after going through the inner loop, the flag=0 means no swapping took place, hence sorted. Therefore break from the loop and exit.
            break;
    }
}

int main(void)
{
    int size;
    printf("Enter the size of the array you want to sort \n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements in the array of size %d  \n",size);
    getArray(array, size);
    printf("\nThe unsorted array is: \n");
    printArray(array, size);
    printf("Now sorting the array: \n");
    BubbleSort(array, size);
    printf("\nAfter sorting, the sorted array is:\n");
    printArray(array, size);

    return 0;

}

