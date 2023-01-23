#include <stdio.h>
#include <stdlib.h>

#define MAX 100

/**
 * simple - simple sort alg
 * Return: 0
 */

int main ()
{
	int n, i, j, temp;
	int arr[MAX];

	printf("enter number \n");
	scanf("%d", &n);

	/* inputing values in arraya */
	for (i = 0; i < n ; i++)
	{
		arr[i] = rand();
	}

	/* outputing unsorted array */
	for (i = 0; i < n; i++)
	{
		printf("%d\t" , arr[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		for (j = 1 + i ; j < n ; j++)
		{
			if (arr[j] < arr[i])
			{
				/* swapping */
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				

			}
		}
	}
	
	/* display the array */
	printf("sorted\n");
	for (i = 0; i < n ; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;

}
