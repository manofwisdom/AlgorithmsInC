
#include<stdio.h>

void MergeSort(int A[], int n)
{
    if(n<2)
    {
        return;
    }
    int i, mid;
    mid = n/2;
    int left[mid];
    int right[n-mid];

    for(i=0;i<mid;i++)
    {
        left[i] = A[i];
    }
    for(i=mid;i<n-mid;i++)
    {
        right[i-mid] = A[i];
    }
    int nLeft = sizeof(left[0])/sizeof(int);
    int nRight = sizeof(right[0])/sizeof(int);
    MergeSort(left,nLeft);
    MergeSort(right,nRight);
    Merge(A,n, left, nLeft, right, nRight);
}

void Merge(int A[], int n, int left[], int nLeft, int right[], int nRight)
{
    int i, j ,k;
    i =j =k =0;
    while(i< nLeft && j < nRight)
    {
        if(left[i] < right[j])
        {
            A[k] = left[i];
            i++;
            k++;
        }
        else{
            A[k] = right[j];
            j++;
            k++;
        }
    }
    while(i< nLeft)
    {
        A[k] = left[i];
            i++;
            k++;
    }
    while(j < nRight)
    {
        A[k] = right[j];
            j++;
            k++;
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
    MergeSort(array, size);
    printf("\nAfter sorting, the sorted array is:\n");
    printArray(array, size);
    return 0;

}

