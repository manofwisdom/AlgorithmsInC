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

int LinearSearch(int *array, int size, int key)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(array[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main(void)
{
    int size,key;
    printf("Enter the size of the array you want to search in \n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements in the array of size %d  \n",size);
    getArray(array, size);
    printf("You entered the following elements: \n");
    printArray(array,size);
    printf("Enter the element to search in the array: \n");
    scanf("%d",&key);
    int result =LinearSearch(array, size, key);
    if(result!=-1)
        printf("The element found at position %d",result);
    else
        printf("The element not found, search unsuccessful \n");

    return 0;
}
