#include <stdio.h>
#include <fahsearch.h>

/*  Both linear search and binary search returns 1 if the search item is on 
the array and 0 otherwise.  */

int linsearch(int *arr, int arr_size, int search_item)
{
    for(int i = 0; i < arr_size - 1; i++)
    {
        if(arr[i] == search_item)
        {
            return 1;
        }
    }
    return 0;
}

int binsearch(int *arr, int arr_size, int search_item)
{
    int start, end, middle;

    start = 0;
    end = arr_size - 1;
    
    while(end >= start)
    {
        middle = (start + end)/2;
        if(arr[middle] == search_item)
        {
            return 1;
        }
        else
        {
            if(arr[middle] < search_item)
            {
                start = middle + 1;
                continue;
            }
            else if(arr[middle] > search_item)
            {
                end = middle - 1;
                continue;
            }
        }
    }
    return 0;
}

