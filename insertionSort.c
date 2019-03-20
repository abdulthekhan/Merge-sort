#include "mySort.h"
#include "metrics.h"
void mySort(int array[], unsigned int first, unsigned int last)
{
int i, j, tmp;

	for ((i  = first + 1); i <= last; i++)
	{
  		myCopy(&array[i], &tmp);
  		j = (i-1);
  	
	while (j>=0 && myCompare(array[j], tmp) > 0)
	{		
		mySwap(&array[j+1], &array[j]);
	      	j--;
	}
		
	myCopy(&tmp, &array[j + 1]);

	}

} 

