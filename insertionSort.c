/*Author: Alok Sharma
*In Insertion Sort, the basic idea is to divide the list in 2 portions: a sorted portion and an unsorted portion.
*In each pass a number is moved from unsorted to sorted portion.
*Initially all unsorted numbers are part of unsorted list in the right and then as we begin sorting we put sorted numbers to the left.
*We begin sorting from the second element, because the first element being only one element is already considered sorted.
*
/
#include<stdio.h>

void insertionSort(int *array, int size)
{
    int i, j, key;
    for(i=1;i<size
    ;i++)
    {
      key =array[i];
      j =i;
      while(j>0 && array[j-1]>key)
      {
          array[j] = array[j-1];
          j--;
      }
      array[j] =key;
    }
}

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
    insertionSort(array, size);
    printf("\nAfter sorting, the sorted array is:\n");
    printArray(array, size);

    return 0;

}
