/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	int i,j;
	j = len / 2;
	if (len<0)
	{
		return NULL ;
	}
	else if (len == 1)
	{
		return NULL;
	}
	else
	{
		for (i = 0; i < j; i++)
		{
			if (Arr[i] > num)
			{
				for (i = len; i > 0; i--)
					Arr[i + 1] = Arr[i];
				Arr[i] = num;
			}
			break;
		}
		for (i = len; i > j; i--)
		{
			if (Arr[i] > num)
				Arr[i + 1] = Arr[i];
			else
				Arr[i] = num;
		}
		Arr[i] = num;
	}

		return Arr;
	
}
//return 0;

	//return NULL;