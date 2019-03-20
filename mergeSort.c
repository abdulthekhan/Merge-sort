#include "mySort.h"
#include <stdio.h>
#include <stdlib.h>

void mySort(int array[], unsigned int left, unsigned int right);
void merge(int array[], int left, int mid, int right);

void mySort(int array[], unsigned int left, unsigned int right)
{
    if (left < right)
    {
        int mid = (left+right)/2;
        mySort(array, left, mid);
        mySort(array, mid+1, right);
        merge(array, left, mid, right);
    }
}

void merge(int array[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 =  right - mid; 
    int l[n1], r[n2]; 
  
    for (i = 0; i < n1; i++)
        myCopy(&array[left + i], &l[i]);
    for (j = 0; j < n2; j++)
        myCopy(&array[mid + 1+ j], &r[j]);

    i = 0; 
    j = 0; 
    k = left; 

    while (i < n1 && j < n2)
    {
        if (myCompare(l[i],r[j]) <= 0)
        {
            myCopy(&l[i++],&array[k]);
        }
        else
        {
            myCopy(&r[j++],&array[k]);
        }
        k++;
    }

    while (i < n1)
    {
        myCopy(&l[i++],&array[k++]);
    }
 
    while (j < n2)
    {
        myCopy(&r[j++],&array[k++]);
    }
}



 

