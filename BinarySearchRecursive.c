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

int BinarySearchRecursive(int *array, int low, int high, int key)
{
    int middle = low +(high-low)/2; //since in case high + low is too high, it may cause overflow
    if(array[middle]==key)
        return middle;
    else if(array[middle]<key) //if key is bigger than element at middle index, then search in upper half
        BinarySearchRecursive(array,middle+1,high,key);
    else if(array[middle]>key) //else if key is smaller than element at middle index, then search in lower half
        BinarySearchRecursive(array,low,middle-1,key);
    else
        return -1; //if element not found, return 1
}


int main(void)
{
    int high, key, low=0;
    printf("Enter the size of the array you want to search in \n");
    scanf("%d",&high);
    int array[high];
    printf("Enter the elements in increasing order in the array of size %d  \n",high);
    getArray(array, high); //Binary Search requires sorted input
    printf("You entered the following elements: \n");
    printArray(array,high);
    printf("Enter the element to search in the array: \n");
    scanf("%d",&key);
    int result =BinarySearchRecursive(array, low, high, key);
    if(result!=-1)
        printf("The element found at position %d",result);
    else
        printf("The element not found, search unsuccessful \n");
    return 0;
}
