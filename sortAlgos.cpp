#include <stdio.h>




int* bubbleSort(int arr[], int n)
{

    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (arr[i]>arr[j])
            {
                // swap sequence
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }

    return arr;

}


int* selectionSort(int arr[], int n)
{

    for (int i = 0; i<n; i++)
    {

    }

    return arr;

}





// void insertionSort(int arr[], int n);
// void mergeSort(int arr[], int n);
// void quickSort(int arr[], int n);
// void heapSort(int arr[], int n);
// void shellSort(int arr[], int n);
// void countingSort(int arr[], int n);
// void radixSort(int arr[], int n);