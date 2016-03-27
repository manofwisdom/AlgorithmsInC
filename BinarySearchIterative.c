#include<stdio.h>

void getArray(int *array, int size);
void printArray(int *array, int size);
int BinarySearchIterative(int *array, int low, int high, int key);

int main(void)
{
    int high, key, low=0;
    printf("Enter the size of the array you want to search in \n");
    scanf("%d",&high);
    int array[high];
    printf("Enter the elements in increasing order in the array of size %d  \n",high);
    getArray(array, high);
    printf("You entered the following elements: \n");
    printArray(array,high);
    printf("Enter the element to search in the array: \n");
    scanf("%d",&key);
    int result =BinarySearchIterative(array, low, high, key);
    if(result!=-1)
        printf("The element found at position %d",result);
    else
        printf("The element not found, search unsuccessful \n");

    return 0;
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

int BinarySearchIterative(int *array, int low, int high, int key)
{
    int middle;
    while(low<high) //
    {
        middle = low + (high-low)/2; //we do (high-low)/2 instead of simply (low+high)/2 to avoid overflow in case low + high is huge, we still get same result
        if(array[middle] == key) //if key is equal to element at middle index, return the middle index
            return middle;
        else if(array[middle]<key) //if key is in upper half, search between middle+1 and high
            low = middle + 1;
        else if(array[middle]>key) //if key is in lower half, search between low and middle -1
            high = middle - 1;

    }
    return -1; //if element not equal to element at middle and also not found in lower or upper half then search unsuccessful

}
