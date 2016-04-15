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
    int i,j, temp;
    for(j=0;j<=size-2;j++) //we'd do n-1 pass in the array of n elements
    {                   //in each pass we'd compare element at index i with element at index i+1 and swap if array[i]>array[i+1]
        for(i=0;i<=size-2;i++) //or i<n-1, i.e. runs from 0 to n-2 this because at i =n-1, that'd be the last index and we won't be able to access array[i+1]
        {
            if(array[i]>array[i+1]) //if element at lower index is larger than the element at higher index
            {                       //then swap both elements
                temp =array[i];
                array[i] =array[i+1];
                array[i+1] =temp;

            }

        }
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

